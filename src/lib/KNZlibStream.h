/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libkeynote project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef KNZLIBSTREAM_H_INCLUDED
#define KNZLIBSTREAM_H_INCLUDED

#include <boost/scoped_ptr.hpp>

#include <libwpd-stream/libwpd-stream.h>

namespace libkeynote
{

class KNZlibStream : public WPXInputStream
{
public:
  KNZlibStream(WPXInputStream *stream);
  virtual ~KNZlibStream();

  virtual bool isOLEStream();
  virtual WPXInputStream *getDocumentOLEStream(const char *name);

  virtual const unsigned char *read(unsigned long numBytes, unsigned long &numBytesRead);
  virtual int seek(long offset, WPX_SEEK_TYPE seekType);
  virtual long tell();
  virtual bool atEOS();

private:
  boost::scoped_ptr<WPXInputStream> m_stream;
};

}

#endif // KNZLIBSTREAM_H_INCLUDED

/* vim:set shiftwidth=2 softtabstop=2 expandtab: */

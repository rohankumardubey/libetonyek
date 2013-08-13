/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libkeynote project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef KN2PARSER_H_INCLUDED
#define KN2PARSER_H_INCLUDED

#include "KNParser.h"

namespace libkeynote
{

struct KNSize;

class KN2Parser : public KNParser
{
public:
  KN2Parser(WPXInputStream *input, KNCollector *collector);
  virtual ~KN2Parser();

private:
  virtual void processXmlNode(xmlTextReaderPtr reader);

  void parseMasterSlides(xmlTextReaderPtr reader);
  void parseMetadata(xmlTextReaderPtr reader);
  void parsePage(xmlTextReaderPtr reader);
  void parseSize(xmlTextReaderPtr reader, KNSize &size);
  void parseSlide(xmlTextReaderPtr reader);
  void parseSlideList(xmlTextReaderPtr reader);
  void parseStylesheet(xmlTextReaderPtr reader);
  void parseTheme(xmlTextReaderPtr reader);
  void parseThemeList(xmlTextReaderPtr reader);

private:
  unsigned m_version;
};

}

#endif //  KN2PARSER_H_INCLUDED

/* vim:set shiftwidth=2 softtabstop=2 expandtab: */

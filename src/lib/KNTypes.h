/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libkeynote project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef KNTYPES_H_INCLUDED
#define KNTYPES_H_INCLUDED

namespace libkeynote
{

struct KNSize
{
  double width;
  double height;

  KNSize();
  KNSize(double w, double h);
};

}

#endif //  KNTYPES_H_INCLUDED

/* vim:set shiftwidth=2 softtabstop=2 expandtab: */
/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libetonyek project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#include "PAG1ParserState.h"

#include "PAGDictionary.h"

namespace libetonyek
{

PAG1ParserState::PAG1ParserState(IWORKParser &parser, PAGDictionary &dict, const TokenizerFunction_t &tokenizer)
  : IWORKXMLParserState(parser, dict, tokenizer)
  , m_dict(dict)
{
}

PAGDictionary &PAG1ParserState::getDictionary()
{
  return m_dict;
}

}

/* vim:set shiftwidth=2 softtabstop=2 expandtab: */
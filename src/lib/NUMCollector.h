/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libetonyek project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef NUMCOLLECTOR_H_INCLUDED
#define NUMCOLLECTOR_H_INCLUDED

#include "IWORKCollector.h"

namespace libetonyek
{

class IWORKDocumentInterface;

class NUMCollector final : public IWORKCollector
{
public:
  explicit NUMCollector(IWORKDocumentInterface *document);

  // collector functions

  // helper functions
  void startDocument();
  void endDocument();

  void startWorkSpace(boost::optional<std::string> const &name);
  void endWorkSpace(IWORKTableNameMapPtr_t tableNameMap);
  boost::optional<std::string> getWorkSpaceName() const final
  {
    return m_workSpaceName;
  }

  void collectStickyNote() final;
private:
  void drawTable() final;
  void drawMedia(double x, double y, const librevenge::RVNGPropertyList &data) final;
  void fillShapeProperties(librevenge::RVNGPropertyList &props) final;
  bool createFrameStylesForTextBox() const final
  {
    return true;
  }
  void drawTextBox(const IWORKTextPtr_t &text, const glm::dmat3 &trafo, const IWORKGeometryPtr_t &boundingBox, const librevenge::RVNGPropertyList &style) final;

  bool m_workSpaceOpened;
  boost::optional<std::string> m_workSpaceName;
  bool m_workSpaceCreateGraphic;
  std::vector<IWORKOutputElements> m_tableElementLists;
};

} // namespace libetonyek

#endif //  NUMCOLLECTOR_H_INCLUDED

/* vim:set shiftwidth=2 softtabstop=2 expandtab: */

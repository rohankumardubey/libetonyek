/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libetonyek project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef IWORKTYPES_H_INCLUDED
#define IWORKTYPES_H_INCLUDED

#include "IWORKTypes_fwd.h"

#include <deque>
#include <map>
#include <string>

#include <boost/optional.hpp>
#include <boost/variant.hpp>

#include <mdds/flat_segment_tree.hpp>

#include "libetonyek_utils.h"
#include "IWORKEnum.h"
#include "IWORKPath_fwd.h"
#include "IWORKStyle_fwd.h"
#include "IWORKFormula.h"

namespace libetonyek
{

class IWORKOutputElements;

typedef std::unordered_map<std::string, IWORKOutputElements> IWORKHeaderFooterMap_t;

struct IWORKSize
{
  double m_width;
  double m_height;
  IWORKSize();
  IWORKSize(double w, double h);
};

struct IWORKPosition
{
  double m_x;
  double m_y;

  IWORKPosition();
  IWORKPosition(double x_, double y_);
};

struct IWORKGeometry
{
  IWORKSize m_naturalSize;
  IWORKSize m_size;
  IWORKPosition m_position;
  boost::optional<double> m_angle;
  boost::optional<double> m_shearXAngle;
  boost::optional<double> m_shearYAngle;
  boost::optional<bool> m_horizontalFlip;
  boost::optional<bool> m_verticalFlip;
  boost::optional<bool> m_aspectRatioLocked;
  boost::optional<bool> m_sizesLocked;

  IWORKGeometry();
};

struct IWORKColor
{
  double m_red;
  double m_green;
  double m_blue;
  double m_alpha;

  IWORKColor();
  IWORKColor(double r, double g, double b, double a);
};

struct IWORKMarker
{
  IWORKMarker();
  bool m_filled;
  double m_scale;
  int m_pathJoin;
  boost::optional<std::string> m_path;
  boost::optional<IWORKPosition> m_endPoint;
};

struct IWORKPadding
{
  boost::optional<double> m_top;
  boost::optional<double> m_right;
  boost::optional<double> m_bottom;
  boost::optional<double> m_left;

  IWORKPadding();
};

struct IWORKTabStop
{
  double m_pos;

  explicit IWORKTabStop(double pos_);
};

typedef std::deque<IWORKTabStop> IWORKTabStops_t;
typedef std::unordered_map<ID_t, IWORKTabStops_t> IWORKTabStopsMap_t;
typedef mdds::flat_segment_tree<unsigned, IWORKStylePtr_t> IWORKGridLine_t;
typedef std::map<unsigned,IWORKGridLine_t> IWORKGridLineMap_t;
typedef std::shared_ptr<IWORKFormula> IWORKFormulaPtr_t;
typedef std::unordered_map<ID_t, IWORKFormulaPtr_t> IWORKFormulaMap_t;

struct IWORKLine
{
  IWORKGeometryPtr_t m_geometry;
  IWORKStylePtr_t m_style;
  boost::optional<double> m_x1;
  boost::optional<double> m_y1;
  boost::optional<double> m_x2;
  boost::optional<double> m_y2;

  IWORKLine();
};

struct IWORKData
{
  RVNGInputStreamPtr_t m_stream;
  boost::optional<std::string> m_displayName;
  std::string m_mimeType;

  IWORKData();
};

struct IWORKMediaContent
{
  boost::optional<IWORKSize> m_size;
  IWORKDataPtr_t m_data;

  IWORKMediaContent();
};

struct IWORKMedia
{
  IWORKGeometryPtr_t m_geometry;
  IWORKStylePtr_t m_style;
  bool m_locked;
  boost::optional<bool> m_placeholder;
  boost::optional<IWORKSize> m_placeholderSize;
  IWORKMediaContentPtr_t m_content;

  IWORKMedia();
};

struct IWORKWrap
{
  IWORKPathPtr_t m_path;
  IWORKGeometryPtr_t m_geometry;

  IWORKWrap();
};

struct IWORKLineSpacing
{
  IWORKLineSpacing(double amount, bool relative);

  double m_amount;
  bool m_relative;
};
typedef std::unordered_map<ID_t, IWORKLineSpacing> IWORKLineSpacingMap_t;

struct IWORKDateTimeData
{
  IWORKDateTimeData();

  int m_year, m_month, m_day;
  int m_hour, m_minute;
  float m_second;
};

struct IWORKTableData
{
  IWORKTableData();

  IWORKColumnSizes_t m_columnSizes;
  IWORKRowSizes_t m_rowSizes;

  unsigned m_column;
  unsigned m_row;
  unsigned m_numColumns;
  unsigned m_numRows;

  boost::optional<unsigned> m_columnSpan;
  boost::optional<unsigned> m_rowSpan;
  boost::optional<unsigned> m_cellMove;
  boost::optional<std::string> m_content;
  boost::optional<IWORKDateTimeData> m_dateTime;
  IWORKFormulaPtr_t m_formula;
  boost::optional<unsigned> m_formulaHC;
  IWORKGridLineMap_t m_horizontalLines;
  IWORKGridLineMap_t m_verticalLines;
  IWORKStylePtr_t m_style;
  IWORKCellType m_type;
};

struct IWORKPattern
{
  IWORKPattern();

  IWORKStrokeType m_type;
  std::deque<double> m_values;
};
typedef std::unordered_map<ID_t, IWORKPattern> IWORKPatternMap_t;

struct IWORKStroke
{
  IWORKStroke();

  double m_width;
  IWORKColor m_color;
  IWORKLineJoin m_join;
  IWORKLineCap m_cap;
  IWORKPattern m_pattern;
};
typedef std::unordered_map<ID_t, IWORKStroke> IWORKStrokeMap_t;

struct IWORKGradientStop
{
  IWORKGradientStop();

  IWORKColor m_color;
  double m_fraction;
  double m_inflection;
};
typedef std::unordered_map<ID_t, IWORKGradientStop> IWORKGradientStopMap_t;

struct IWORKGradient
{
  IWORKGradient();

  IWORKGradientType m_type;
  std::deque<IWORKGradientStop> m_stops;
  double m_angle;
};

struct IWORKFillImage
{
  IWORKFillImage();

  IWORKFillImageType m_type;
  boost::optional<IWORKColor> m_color;
  IWORKSize m_size;
  RVNGInputStreamPtr_t m_stream;
  std::string m_mimeType;
};

typedef boost::variant<IWORKColor, IWORKGradient, IWORKFillImage> IWORKFill;

struct IWORKShadow
{
  IWORKShadow();

  IWORKColor m_color;
  double m_angle;
  double m_offset;
  double m_opacity;
};

struct IWORKMetadata
{
  IWORKMetadata();

  std::string m_title;
  std::string m_author;
  std::string m_keywords;
  std::string m_comment;
};

struct IWORKColumns
{
  struct Column
  {
    Column();

    double m_width;
    double m_spacing;
  };

  typedef std::deque<Column> Columns_t;

  IWORKColumns();

  bool m_equal;
  Columns_t m_columns;
};

struct IWORKNumberFormat
{
  IWORKNumberFormat();

  IWORKCellNumberType m_type;
  std::string m_string;
  int m_decimalPlaces;
  std::string m_currencyCode;
  int m_negativeStyle;
  bool m_thousandsSeperator;
  int m_fractionAccuracy;
  bool m_accountingStyle;
  int m_base;
  int m_basePlaces;
};

struct IWORKDateTimeFormat
{
  IWORKDateTimeFormat();

  std::string m_format;
};

struct IWORKDurationFormat
{
  IWORKDurationFormat();

  std::string m_format;
};

struct IWORKFilterDescriptor
{
  IWORKFilterDescriptor();

  bool m_isShadow;
};

typedef std::unordered_map<ID_t, IWORKFilterDescriptor> IWORKFilterDescriptorMap_t;

struct IWORKListLabelGeometry
{
  IWORKListLabelGeometry();

  IWORKAlignment m_align;
  double m_scale;
  double m_offset;
  bool m_scaleWithText;
};

typedef std::unordered_map<ID_t, IWORKListLabelGeometry> IWORKListLabelGeometryMap_t;

struct IWORKTextLabelFormat
{
  IWORKTextLabelFormat();

  IWORKLabelNumFormatSurrounding m_prefix;
  IWORKLabelNumFormat m_format;
  IWORKLabelNumFormatSurrounding m_suffix;
};

struct IWORKTextLabel
{
  IWORKTextLabel();

  IWORKTextLabelFormat m_format;
  bool m_tiered;
  unsigned m_first;
};

// Type of list label. One of: none, bullet, text, image.
// Note: The bool type, representing 'none', is just a placeholder. The
// value is not important.
typedef boost::variant<bool, std::string, IWORKTextLabel, IWORKMediaContentPtr_t> IWORKListLabelTypeInfo_t;
typedef std::unordered_map<ID_t, IWORKListLabelTypeInfo_t> IWORKListLabelTypeInfoMap_t;

typedef std::map<unsigned, IWORKStylePtr_t> IWORKListLevels_t;
}

#endif //  IWORKTYPES_H_INCLUDED

/* vim:set shiftwidth=2 softtabstop=2 expandtab: */

/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libetonyek project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef IWORKTOKEN_H_INCLUDED
#define IWORKTOKEN_H_INCLUDED

#include <boost/static_assert.hpp>

#include "IWORKTokenInfo.h"

namespace libetonyek
{

class IWORKTokenizer;

namespace IWORKToken
{

enum
{
  INVALID_TOKEN = 0,
  FIRST_TOKEN = IWORKTokenInfo<IWORKParser>::first,

  // namespace prefixes
  sf,
  sfa,
  xsi,

  // elements
  Series_0,
  Series_1,
  Series_2,
  Series_3,
  Series_4,
  Series_5,
  Series_6,
  Series_7,

  SFC2DAreaFillProperty,
  SFC2DColumnFillProperty,
  SFC2DMixedColumnFillProperty,
  SFC2DPieFillProperty,
  SFC3DAreaFillProperty,
  SFC3DColumnFillProperty,
  SFC3DPieFillProperty,
  SFTableCellStylePropertyFill,
  SFTableStylePropertyCellStyle,
  SFTableStylePropertyHeaderColumnCellStyle,
  SFTableStylePropertyHeaderRowCellStyle,
  SFTCellStylePropertyDateTimeFormat,
  SFTCellStylePropertyDurationFormat,
  SFTCellStylePropertyNumberFormat,
  SFTCellStylePropertyLayoutStyle,
  SFTCellStylePropertyParagraphStyle,
  SFTDefaultBodyCellStyleProperty,
  SFTDefaultBodyVectorStyleProperty,
  SFTDefaultBorderVectorStyleProperty,
  SFTDefaultFooterBodyVectorStyleProperty,
  SFTDefaultFooterRowCellStyleProperty,
  SFTDefaultFooterSeparatorVectorStyleProperty,
  SFTDefaultGroupingLevel0VectorStyleProperty,
  SFTDefaultGroupingLevel1VectorStyleProperty,
  SFTDefaultGroupingLevel2VectorStyleProperty,
  SFTDefaultGroupingLevel3VectorStyleProperty,
  SFTDefaultGroupingLevel4VectorStyleProperty,
  SFTDefaultGroupingLevel5VectorStyleProperty,
  SFTDefaultGroupingRowCell0StyleProperty,
  SFTDefaultGroupingRowCell1StyleProperty,
  SFTDefaultGroupingRowCell2StyleProperty,
  SFTDefaultGroupingRowCell3StyleProperty,
  SFTDefaultGroupingRowCell4StyleProperty,
  SFTDefaultGroupingRowCell5StyleProperty,
  SFTDefaultHeaderBodyVectorStyleProperty,
  SFTDefaultHeaderColumnCellStyleProperty,
  SFTDefaultHeaderRowCellStyleProperty,
  SFTDefaultHeaderSeparatorVectorStyleProperty,
  SFTHeaderColumnRepeatsProperty,
  SFTHeaderRowRepeatsProperty,
  SFTStrokeProperty,
  SFTTableBandedRowsProperty,
  SFTTableNameStylePropertyLayoutStyle,
  SFTTableNameStylePropertyParagraphStyle,
  alignment,
  alpha_mask_path,
  angle_gradient,
  angle_gradient_ref,
  annotation,
  annotation_field,
  annotation_field_ref,
  annotations,
  anon_styles,
  array,
  array_ref,
  attachment,
  attachment_ref,
  attachments,
  audio_only_image,
  audio_only_image_ref,
  authors,
  baselineShift,
  baseSize,
  bezier,
  bezier_path,
  bezier_ref,
  binary,
  binary_ref,
  body_placeholder_ref,
  bold,
  br,
  cached_data,
  calc_engine,
  calc_engine_entities,
  calligraphy_stroke,
  callout2_path,
  capitalization,
  category_title,
  cb,
  cell_address,
  cell_comment_mapping,
  cell_date,
  cell_storage,
  cell_style,
  cell_style_ref,
  cell_text,
  cf, // condition
  cf_ref,
  characterstyle,
  characterstyle_ref,
  chart_column_names,
  chart_info,
  chart_model_object,
  chart_name,
  chart_row_names,
  chart_series_style,
  chart_series_style_ref,
  chart_style,
  chart_style_ref,
  chart_type,
  chisel,
  col,
  color,
  column,
  column_label_formulas,
  columns,
  columns_ref,
  comment,
  connection_line,
  connection_path,
  connection_style,
  container_hint,
  contbr,
  content,
  content_size,
  core_image_filter_descriptor,
  core_image_filter_descriptor_ref,
  core_image_filter_info,
  core_image_filter_info_ref,
  crbr,
  crop_geometry,
  ct,
  custom_space_color,
  d,
  data,
  date_cell,
  date_format,
  date_format_ref,
  data_formulas,
  data_ref,
  date_time,
  datasource,
  drawable_shape,
  drawables,
  du,
  duration_format,
  duration_format_ref,
  editable_bezier_path,
  element,
  end,
  end_point,
  error_warning_mapping,
  evenPageMaster,
  extent,
  external_text_wrap,
  externalTextWrap,
  f,
  filename,
  fill,
  fill_ref,
  filtered,
  filtered_image,
  filtered_image_ref,
  filter_properties,
  filters,
  filterset,
  firstLineIndent,
  firstPageMaster,
  fm, // formula mutable dictionary
  fmt,
  fo,
  followingLayoutStyle,
  followingParagraphStyle,
  fontColor,
  fontName,
  fontSize,
  footer,
  footers,
  footnote,
  footnote_mark,
  footnotebr,
  footnotes,
  formula,
  formula_cell,
  formula_chart_model,
  formula_string,
  fraction,
  frame,
  fs,
  g,
  geometry,
  generic_cell,
  gradient_stop,
  gradient_stop_ref,
  graphic_style,
  graphic_style_ref,
  grid,
  grid_column,
  grid_row,
  gridline_index,
  group,
  group_value,
  grouping,
  grouping_display,
  grouping_order,
  grouping_state,
  groupings_element,
  head,
  header,
  headers,
  headline_style,
  headLineEnd,
  host_cell_ID,
  host_table_ID,
  href,
  id,
  image,
  image_media,
  image_ref,
  inflection,
  inputAngle,
  inputColor,
  inputDistance,
  inputGlossiness,
  inputOpacity,
  inputRadius,
  insertion_point,
  intratopicbr,
  italic,
  keepLinesTogether,
  keepWithNext,
  keywords,
  labelCharacterStyle1,
  labelCharacterStyle2,
  labelCharacterStyle3,
  labelCharacterStyle4,
  labelCharacterStyle5,
  labelCharacterStyle6,
  labelCharacterStyle7,
  labelCharacterStyle8,
  labelCharacterStyle9,
  language,
  layer,
  layer_ref,
  layers,
  layout,
  layoutMargins,
  layoutParagraphStyle,
  layoutParagraphStyle_ref,
  layoutstyle,
  layoutstyle_ref,
  layoutStyle,
  leftIndent,
  leveled,
  line,
  line_end,
  lineSpacing,
  linespacing,
  linespacing_ref,
  link,
  listLabelGeometries,
  listLabelIndents,
  listLabelTypes,
  listStyle,
  listTextIndents,
  list_label_geometry,
  list_label_geometry_ref,
  list_label_typeinfo,
  list_label_typeinfo_ref,
  liststyle,
  liststyle_ref,
  lnbr,
  main_movie,
  main_movie_ref,
  manipulated_stroke,
  masking_shape_path_source,
  media,
  menu_choices,
  metadata,
  mf_ref,
  movie_media,
  mutable_array,
  mutable_array_ref,
  n,
  naturalSize,
  null,
  number,
  number_cell,
  number_format,
  number_format_ref,
  oddPageMaster,
  of,
  original_size,
  other_datas,
  outline,
  overrides,
  overrides_ref,
  p,
  padding,
  padding_ref,
  pageBreakBefore,
  pagemaster,
  page_count,
  page_number,
  page_margins,
  page_start,
  paragraphBorderType,
  paragraphFill,
  paragraphStroke,
  paragraphstyle,
  paragraphstyle_ref,
  parameters,
  parent_ref,
  path,
  pattern,
  pattern_ref,
  pgbr,
  placeholder_size,
  placeholder_style,
  placeholder_style_ref,
  pm,
  point,
  point_path,
  position,
  poster_image,
  property_map,
  proxied_cell_ref,
  proxy_master_layer,
  r,
  rb,
  rd,
  result_bool_cell,
  result_cell,
  result_date_cell,
  result_number_cell,
  result_text_cell,
  rightIndent,
  rn,
  row,
  row_label_formulas,
  rows,
  rt,
  s,
  scalar_path,
  section,
  sectionstyle,
  sectionstyle_ref,
  selection_end,
  self_contained_movie,
  shape,
  size,
  sl,
  slide_style,
  slide_style_ref,
  so,
  sort,
  spaceAfter,
  spaceBefore,
  span,
  span_cell,
  st,
  start,
  start_index,
  sticky_note,
  stop_index,
  stops,
  strikethru,
  string,
  stroke,
  stroke_ref,
  style,
  style_run,
  styles,
  stylesheet,
  stylesheet_ref,
  superscript,
  t,
  tab,
  tabs,
  tabs_ref,
  tabstop,
  table_cell,
  table_cell_ref,
  table_cell_style,
  table_cell_style_ref,
  table_info,
  table_style,
  table_style_ref,
  table_vector,
  table_vector_style,
  table_vector_style_ref,
  tableCellArrayCellsByColumn,
  tableCellArrayCellsByRow,
  tableCellContent,
  tableCellFormula,
  tableCellMinXSide_ref,
  tableCellMaxXSide_ref,
  tableCellMinYSide_ref,
  tableCellMaxYSide_ref,
  tableCellStyle_ref,
  tableCellValue,
  tableInfoTable,
  tableModelCells,
  tableModelPartitionSource,
  tableModelStyle_ref,
  tableModelTableID,
  tableModelVectors,
  tableVectorAlong,
  tableVectorArrayRowVectors,
  tableVectorArrayColumnVectors,
  tableVectorAxis,
  tableVectorBegin,
  tableVectorEnd,
  tableVectorStyle_ref,
  tabular_info,
  tabular_model,
  tabular_model_ref,
  tabular_style,
  tabular_style_ref,
  tail,
  tailLineEnd,
  text,
  textBackground,
  text_body,
  text_cell,
  text_label,
  text_label_ref,
  text_storage,
  texture_fill,
  texture_fill_ref,
  textured_fill,
  textured_fill_ref,
  title,
  title_placeholder_ref,
  tocstyle,
  tocstyle_ref,
  tocStyle,
  traced_path,
  tracking,
  transform_gradient,
  type,
  underline,
  unfiltered,
  unfiltered_ref,
  vector_style,
  vector_style_ref,
  verticalAlignment,
  vertical_gridline_styles,
  widowControl,
  workspace_style,
  wrap,

  // attributes
  ID,
  IDREF,
  a,
  align,
  attachment_wrap_type,
  amt,
  angle,
  aspectRatioLocked,
  b,
  bottom,
  c,
  cap,
  cell_style_default_line_height,
  col_span,
  cornerRadius,
  copyright,
  count,
  custom,
  decimal,
  direction,
  displayname,
  equal_columns,
  filled,
  filterClassName,
  filter_visibility,
  first,
  fitting_height,
  fitting_width,
  flags,
  floating_wrap_enabled,
  floating_wrap_type,
  format,
  format_base,
  format_base_places,
  format_base_use_minus_sign,
  format_currency_code,
  format_decimal_places,
  format_fraction_accuracy,
  format_name,
  format_negative_style,
  format_show_thousands_separator,
  format_string,
  format_type,
  format_use_accounting_style,
  frame_h,
  frame_w,
  frame_x,
  frame_y,
  group_formula_string,
  group_formula_value,
  group_formula_value_valid,
  h,
  height,
  hc,
  ht,
  hfs_type,
  ho,
  horizontalFlip,
  horizontal_gridline_styles,
  horizontal_offset,
  ident,
  identifier,
  implicit_format_type,
  increment,
  inline_wrap_enabled,
  index,
  join,
  k,
  kind,
  left,
  list_level,
  locked,
  m,
  manually_sized,
  margin,
  mark,
  max_value,
  min_value,
  mode,
  name,
  nc,
  ncoc,
  nsc,
  num_footer_rows,
  num_header_columns,
  num_header_rows,
  numcols,
  numrows,
  offset,
  opacity,
  parent_ident,
  path_join,
  phase,
  pos,
  preferred_height,
  preferred_width,
  projects,
  restart_list,
  right,
  row_span,
  scalar,
  scale,
  scale_with_text,
  seriesIndex,
  sfclass,
  shearXAngle,
  shearYAngle,
  sizesLocked,
  slider_orientation,
  slider_position,
  spacing,
  tableCellPreferredHeight,
  tableModelIsHeaderColumn,
  tableModelIsHeaderRow,
  tabular_style_name_internal,
  tailAtCenter,
  tailPositionX,
  tailPositionY,
  tailSize,
  target,
  technique,
  top,
  tscale,
  v,
  val,
  value,
  value_title,
  version,
  vertical_offset,
  verticalFlip,
  vo,
  w,
  width,
  wrap_style,
  x,
  x_coordinate,
  y,
  y_coordinate,

  // attribute values
  SFIUDropShadow,
  _0,
  _1,
  _1246774599,
  _1299148630,
  _1346651680,
  _1347307366,
  _1414088262,
  __multilingual,
  aligned,
  alpha_threshold,
  both,
  bullet,
  butt,
  center,
  directional,
  double_,
  empty,
  false_,
  fit,
  largest,
  linear,
  lower_alpha,
  lower_roman,
  miter,
  natural,
  neither,
  none,
  radial,
  regular,
  relative,
  round,
  solid,
  star,
  stretch,
  tight,
  tile,
  true_,
  unaligned,
  upper_alpha,
  upper_roman,

  LAST_TOKEN
};

BOOST_STATIC_ASSERT(IWORKTokenInfo<IWORKParser>::last >= LAST_TOKEN);

enum Namespace
{
  NS_URI_SF = sf << 16,
  NS_URI_SFA = sfa << 16,
  NS_URI_XSI = xsi << 16,
};

const IWORKTokenizer &getTokenizer();

}

}

#endif // IWORKTOKEN_H_INCLUDED

/* vim:set shiftwidth=2 softtabstop=2 expandtab: */

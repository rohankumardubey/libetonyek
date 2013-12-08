/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libetonyek project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef PAGESTOKEN_H_INCLUDED
#define PAGESTOKEN_H_INCLUDED

namespace libetonyek
{

namespace PAGESToken
{

namespace detail
{

template<unsigned N, unsigned P>
struct log_impl
{
  static const unsigned value = log_impl<(N >> 1), P + 1>::value;
};

template<unsigned P>
struct log_impl<1, P>
{
  static const unsigned value = P;
};

template<unsigned P>
struct log_impl<0, P>
{
};

template<unsigned N>
struct log
{
  static const unsigned value = log_impl<N, 0>::value;
};

}

enum
{
  INVALID_TOKEN = 0,

  // elements
  alignment,
  allpages_group,
  angle_gradient,
  anon_styles,
  array,
  atsuFontFeatures,
  ATSUVersion,
  attachment,
  attachment_ref,
  attachments,
  authors,
  backgroundmaster_group,
  baselineShift,
  bezier,
  bezier_path,
  blendMode,
  bold,
  br,
  calc_engine,
  calculation_engine,
  capitalization,
  cell_comment_mapping,
  cell_precedents,
  cell_style,
  cell_style_ref,
  cf,
  cf_ref,
  characterstyle,
  characterstyle_ref,
  chart_series_style,
  chart_series_style_ref,
  chart_style,
  color,
  columns,
  comment,
  components,
  connection_style,
  container_hint,
  content,
  copyright,
  core_image_filter_descriptor,
  core_image_filter_descriptor_ref,
  core_image_filter_info,
  crbr,
  ct,
  CTVersion,
  custom_space_color,
  data,
  datasource,
  date,
  date_format,
  date_format_ref,
  date_time,
  decimal_number,
  decimalTab,
  DefaultHyphenationLanguage,
  defaultTabStops,
  dependency_tracker,
  dependents,
  document,
  drawables,
  drawable_shape,
  drawable_shape_ref,
  dropCap,
  duration_format,
  duration_format_ref,
  effect,
  effectColor,
  end_point,
  error_warning_mapping,
  evenPageMaster,
  extent,
  external_text_wrap,
  externalTextWrap,
  external_text_wrap_ref,
  f,
  fields,
  fill,
  filtered_image,
  filters,
  filterset,
  filterspec,
  first_group,
  firstLineIndent,
  firstPageMaster,
  firstTopicNumber,
  fo,
  followingLayoutStyle,
  followingParagraphStyle,
  fontColor,
  fontName,
  fontSize,
  footer,
  footers,
  foregroundmaster_group,
  geometry,
  ghost_text,
  ghost_text_ref,
  gradient_stop,
  graphic_style,
  graphic_style_ref,
  grid,
  grid_column,
  grid_row,
  header,
  headers,
  headLineEnd,
  headOffset,
  hidden,
  horizontal_gridline_styles,
  hyphenate,
  image_media,
  inheritPreviousHF,
  inputAngle,
  inputColor,
  inputDistance,
  inputOpacity,
  inputRadius,
  insertion_point,
  italic,
  keepLinesTogether,
  keepWithNext,
  kerning,
  keywords,
  kSFWPAutoHyphenationProperty,
  kSFWPFootnoteFormatProperty,
  kSFWPFootnoteGapProperty,
  kSFWPFootnoteKindProperty,
  kSFWPFootnoteNumberingProperty,
  kSFWPFromUIDMergeCategoryProperty,
  kSFWPGhostTextAuthoringEnabledProperty,
  kSFWPHasBodyProperty,
  kSFWPHasFootersProperty,
  kSFWPHasHeadersProperty,
  kSFWPHyperlinksEnabledProperty,
  kSFWPHyphenationZoneProperty,
  kSFWPNLinesOutlinerProperty,
  kSFWPOutlineFilterLevelProperty,
  kSFWPOutlinerIndentsProperty,
  kSFWPOutlinerThumbnailAttachmentsProperty,
  kSFWPShowOutlinerProperty,
  kSFWPTOCLinksEnabledProperty,
  kSFWPUseLigaturesProperty,
  labelCharacterStyle1,
  labelCharacterStyle3,
  labelCharacterStyle4,
  labelCharacterStyle5,
  labelCharacterStyle6,
  labelCharacterStyle7,
  labelCharacterStyle8,
  labelCharacterStyle9,
  language,
  layout,
  layoutContinuous,
  layoutMargins,
  layoutParagraphStyle,
  layoutstyle,
  layoutStyle,
  layoutstyle_ref,
  leftIndent,
  ligatures,
  line_end,
  linespacing,
  lineSpacing,
  linespacing_ref,
  link,
  listLabelGeometries,
  list_label_geometry,
  list_label_geometry_ref,
  listLabelIndents,
  list_label_typeinfo,
  list_label_typeinfo_ref,
  listLabelTypes,
  liststyle,
  listStyle,
  liststyle_ref,
  listTextIndents,
  lnbr,
  masters_group,
  media,
  merge_field,
  merge_field_ref,
  metadata,
  mutable_array,
  n,
  naturalSize,
  NSBottomMargin,
  NSCopies,
  NSDetailedErrorReporting,
  NSFirstPage,
  NSHorizonalPagination,
  NSHorizontallyCentered,
  NSJobDisposition,
  NSLastPage,
  NSLeftMargin,
  NSMustCollate,
  NSOrientation,
  NSPagesAcross,
  NSPagesDown,
  NSPaperName,
  NSPaperSize,
  NSPrintAllPages,
  NSPrinter,
  NSPrintProtected,
  NSRightMargin,
  NSSavePath,
  NSScalingFactor,
  NSTopMargin,
  NSVerticallyCentered,
  NSVerticalPagination,
  null,
  number,
  number_format,
  number_format_ref,
  oddPageMaster,
  opacity,
  original_size,
  OSVersion,
  outline,
  outlineColor,
  outlineLevel,
  outlineStyleType,
  overrides,
  p,
  padding,
  padding_ref,
  pageBreakBefore,
  page_group,
  page_margins,
  pagemaster,
  pageMasterFirstPageDifferent,
  pageMasterLeftRightPagesDifferent,
  page_number,
  page_start,
  paragraphBorders,
  paragraphBorderType,
  paragraphFill,
  paragraphRuleOffset,
  paragraphRuleWidth,
  paragraphStroke,
  paragraphstyle,
  paragraphstyle_ref,
  path,
  pattern,
  pattern_ref,
  pgbr,
  placeholder_size,
  position,
  printer,
  print_info,
  profile_data,
  profile_data_ref,
  projects,
  property_map,
  prototype,
  publication_info,
  r,
  range_precedents,
  rect,
  reflection,
  rightIndent,
  rn,
  rows,
  s,
  scroll_to,
  sectbr,
  section,
  section_drawables,
  sectionLayoutStyle,
  sectionPageNumberKind,
  sectionPageNumberStart,
  section_prototypes,
  sectionstyle,
  sectionstyle_ref,
  selection,
  Series_0,
  Series_1,
  Series_2,
  Series_3,
  Series_4,
  Series_5,
  set,
  SFC2DAntialiasingModeProperty,
  SFC2DAreaDataPointFillProperty,
  SFC2DAreaDataPointStrokeProperty,
  SFC2DAreaDataPointSymbolProperty,
  SFC2DAreaFillProperty,
  SFC2DAreaShadowProperty,
  SFC2DAreaStrokeProperty,
  SFC2DAreaUseSeriesFillForDataPointFillProperty,
  SFC2DAreaUseStrokeColorForDataPointFillProperty,
  SFC2DBarFillProperty,
  SFC2DBarShadowProperty,
  SFC2DBarStrokeProperty,
  SFC2DBottomBorderOpacityProperty,
  SFC2DBottomBorderShadowProperty,
  SFC2DBottomBorderStrokeProperty,
  SFC2DCategoryDirectionGridLineOpacityProperty,
  SFC2DCategoryDirectionGridLineShadowProperty,
  SFC2DCategoryDirectionGridLineStrokeProperty,
  SFC2DCategoryDirectionMinorGridLineIntervalProperty,
  SFC2DCategoryDirectionMinorGridLineOpacityProperty,
  SFC2DCategoryDirectionMinorGridLineShadowProperty,
  SFC2DCategoryDirectionMinorGridLineStrokeProperty,
  SFC2DChartBackgroundFillProperty,
  SFC2DChartBackgroundOpacityProperty,
  SFC2DColumnFillProperty,
  SFC2DCombineLayersProperty,
  SFC2DLeftBorderOpacityProperty,
  SFC2DLeftBorderShadowProperty,
  SFC2DLeftBorderStrokeProperty,
  SFC2DLineConnectedPointsProperty,
  SFC2DLineDataPointFillProperty,
  SFC2DLineDataPointStrokeProperty,
  SFC2DLineDataPointSymbolProperty,
  SFC2DLineShadowProperty,
  SFC2DLineStrokeProperty,
  SFC2DLineUseSeriesFillForDataPointFillProperty,
  SFC2DLineUseStrokeColorForDataPointFillProperty,
  SFC2DMixedAreaDataPointFillProperty,
  SFC2DMixedAreaDataPointStrokeProperty,
  SFC2DMixedAreaDataPointSymbolProperty,
  SFC2DMixedAreaFillProperty,
  SFC2DMixedAreaShadowProperty,
  SFC2DMixedAreaStrokeProperty,
  SFC2DMixedAreaUseSeriesFillForDataPointFillProperty,
  SFC2DMixedAreaUseStrokeColorForDataPointFillProperty,
  SFC2DMixedColumnFillProperty,
  SFC2DMixedColumnShadowProperty,
  SFC2DMixedColumnStrokeProperty,
  SFC2DMixedConnectedPointsProperty,
  SFC2DMixedLineDataPointFillProperty,
  SFC2DMixedLineDataPointStrokeProperty,
  SFC2DMixedLineDataPointSymbolProperty,
  SFC2DMixedLineShadowProperty,
  SFC2DMixedLineStrokeProperty,
  SFC2DMixedLineUseStrokeColorForDataPointFillProperty,
  SFC2DOpacityProperty,
  SFC2DPieFillProperty,
  SFC2DPieShadowProperty,
  SFC2DPieStrokeProperty,
  SFC2DRightBorderOpacityProperty,
  SFC2DRightBorderShadowProperty,
  SFC2DRightBorderStrokeProperty,
  SFC2DScatterDataPointFillProperty,
  SFC2DScatterDataPointStrokeProperty,
  SFC2DScatterDataPointSymbolProperty,
  SFC2DScatterDataPointSymbolSizeProperty,
  SFC2DScatterShadowProperty,
  SFC2DScatterStrokeProperty,
  SFC2DShowBottomBorderProperty,
  SFC2DShowBottomTicksProperty,
  SFC2DShowCategoryDirectionGridLinesProperty,
  SFC2DShowCategoryDirectionMinorGridLinesProperty,
  SFC2DShowLeftBorderProperty,
  SFC2DShowLeftTicksProperty,
  SFC2DShowRightBorderProperty,
  SFC2DShowRightTicksProperty,
  SFC2DShowTopBorderProperty,
  SFC2DShowTopTicksProperty,
  SFC2DShowValueDirectionGridLinesProperty,
  SFC2DShowValueDirectionMinorGridLinesProperty,
  SFC2DTopBorderOpacityProperty,
  SFC2DTopBorderShadowProperty,
  SFC2DTopBorderStrokeProperty,
  SFC2DValueDirectionGridLineOpacityProperty,
  SFC2DValueDirectionGridLineShadowProperty,
  SFC2DValueDirectionGridLineStrokeProperty,
  SFC2DValueDirectionMinorGridLineIntervalProperty,
  SFC2DValueDirectionMinorGridLineOpacityProperty,
  SFC2DValueDirectionMinorGridLineShadowProperty,
  SFC2DValueDirectionMinorGridLineStrokeProperty,
  SFC3DAreaChartScaleProperty,
  SFC3DAreaFillProperty,
  SFC3DAreaLightingPackageProperty,
  SFC3DAreaShadowProperty,
  SFC3DBarChartScaleProperty,
  SFC3DBarFillProperty,
  SFC3DBarLightingPackageProperty,
  SFC3DBarShadowProperty,
  SFC3DBarShapeProperty,
  SFC3DBevelEdgesProperty,
  SFC3DCategoryDirectionGridLineOpacityProperty,
  SFC3DCategoryDirectionGridLineStrokeProperty,
  SFC3DChartRotationProperty,
  SFC3DChartScaleProperty,
  SFC3DColumnBevelEdgesProperty,
  SFC3DColumnChartScaleProperty,
  SFC3DColumnFillProperty,
  SFC3DColumnLightingPackageProperty,
  SFC3DFloorDepthProperty,
  SFC3DFloorEmissiveColorProperty,
  SFC3DFloorFillProperty,
  SFC3DFloorSpecularColorProperty,
  SFC3DInterSetDepthGapProperty,
  SFC3DLabelThicknessProperty,
  SFC3DLightingPackageProperty,
  SFC3DLineChartScaleProperty,
  SFC3DLineFillProperty,
  SFC3DLineLightingPackageProperty,
  SFC3DLineShadowProperty,
  SFC3DMaterialPackageProperty,
  SFC3DPieBevelEdgesProperty,
  SFC3DPieChartScaleProperty,
  SFC3DPieFillProperty,
  SFC3DPieLightingPackageProperty,
  SFC3DPieShadowProperty,
  SFC3DReflectionsLevelProperty,
  SFC3DSceneBackgroundColorProperty,
  SFC3DSceneShowTextureProperty,
  SFC3DSceneTextureTilingProperty,
  SFC3DSeriesEmissiveColorProperty,
  SFC3DSeriesShininessProperty,
  SFC3DSeriesSpecularColorProperty,
  SFC3DShadowCameraXProperty,
  SFC3DShadowCameraYProperty,
  SFC3DShadowProperty,
  SFC3DShowBackWallProperty,
  SFC3DShowFloorProperty,
  SFC3DShowReflectionsProperty,
  SFC3DTextureProperty,
  SFC3DTextureTilingProperty,
  SFC3DValueDirectionGridLineOpacityProperty,
  SFC3DValueDirectionGridLineStrokeProperty,
  SFC3DWallEmissiveColorProperty,
  SFC3DWallFillProperty,
  SFC3DWallSpecularColorProperty,
  SFC3DWallsShininessProperty,
  SFCAreaSeriesValueParagraphStyleProperty,
  SFCAreaShowValueLabelProperty,
  SFCAreaValueLabelPositionProperty,
  SFCAxisLabelsOrientationProperty,
  SFCBarSeriesValueParagraphStyleProperty,
  SFCBarShowValueLabelProperty,
  SFCBarValueLabelPositionProperty,
  SFCCategoryAxisLabelsDepthProperty,
  SFCCategoryAxisLabelsOpacityProperty,
  SFCCategoryAxisLabelsOrientationProperty,
  SFCCategoryAxisLabelsPositionProperty,
  SFCCategoryAxisMajorTickLengthProperty,
  SFCCategoryAxisMajorTickStrokeProperty,
  SFCCategoryAxisMinorTickLengthProperty,
  SFCCategoryAxisMinorTickStrokeProperty,
  SFCCategoryAxisParagraphStyleProperty,
  SFCCategoryAxisShowMajorTickMarksProperty,
  SFCCategoryAxisShowMinorTickMarksProperty,
  SFCCategoryAxisTickMarkLocationProperty,
  SFCCategoryAxisTitleParagraphStyleProperty,
  SFCCategoryHorizontalSpacingProperty,
  SFCCategoryVerticalSpacingProperty,
  SFCChartTitleParagraphStyleProperty,
  SFCDefaultChartAngleProperty,
  SFCDefaultChartBoundsProperty,
  SFCDefaultChartTypeProperty,
  SFCDefaultLegendAngleProperty,
  SFCDefaultLegendBoundsProperty,
  SFCDepthProperty,
  SFCEmissiveColorProperty,
  SFCErrorBarXAxisStrokeProperty,
  SFCErrorBarXLineEndProperty,
  SFCErrorBarYAxisShadowProperty,
  SFCErrorBarYAxisStrokeProperty,
  SFCErrorBarYLineEndProperty,
  SFCHorizontalAxisLogarithmicProperty,
  SFCHorizontalAxisNumberFormatSeparatorProperty,
  SFCHorizontalAxisNumberOfDecadesProperty,
  SFCHorizontalAxisShowMinimumValueProperty,
  SFCInitialNumberOfSeriesProperty,
  SFCInterBarGapProperty,
  SFCInterSetGapProperty,
  SFCLabelOpacityProperty,
  SFCLabelShadowProperty,
  SFCLegendFillProperty,
  SFCLegendOpacityProperty,
  SFCLegendParagraphStyleProperty,
  SFCLegendPositionProperty,
  SFCLegendStrokeProperty,
  SFCLineSeriesValueParagraphStyleProperty,
  SFCLineShowValueLabelProperty,
  SFCLineValueLabelPositionProperty,
  SFCMixedAreaValueLabelPositionProperty,
  SFCMixedColumnValueLabelPositionProperty,
  SFCMixedLineValueLabelPositionProperty,
  SFCMixedSeriesValueParagraphStyleProperty,
  SFCMixedShowValueLabelProperty,
  SFCNumberOfDefinedSeriesStylesProperty,
  SFCPieSeriesStartAngleProperty,
  SFCPieSeriesValueParagraphStyleProperty,
  SFCPieShowSeriesNameLabelProperty,
  SFCPieShowValueLabelProperty,
  SFCPieValueLabelPosition2Property,
  SFCPieValueLabelPositionProperty,
  SFCPieWedgeExplosionProperty,
  SFCPieWedgeGroupingsProperty,
  SFCSeriesValueLabelDateTimeFormatProperty,
  SFCSeriesValueLabelDurationFormatProperty,
  SFCSeriesValueLabelFormatTypeProperty,
  SFCSeriesValueLabelNumberFormatProperty,
  SFCSeriesValueLabelPercentageAxisNumberFormatProperty,
  SFCSeriesValueLabelPieFormatTypeProperty,
  SFCSeriesValueLabelPieNumberFormatProperty,
  SFCShininessProperty,
  SFCShowCategoryAxisLabelsProperty,
  SFCShowCategoryAxisSeriesLabelsProperty,
  SFCShowCategoryAxisTitleProperty,
  SFCShowChartTitleProperty,
  SFCShowLastCategoryAxisLabelsProperty,
  SFCShowPieLabelAsPercentageProperty,
  SFCShowValueAxisTitleProperty,
  SFCShowValueY2AxisTitleProperty,
  SFCSpecularColorProperty,
  SFCStackedAreaValueLabelPositionProperty,
  SFCStackedBarValueLabelPositionProperty,
  SFCTrendlineEquationOpacityProperty,
  SFCTrendlineEquationParagraphStyleProperty,
  SFCTrendlineRSquaredOpacityProperty,
  SFCTrendlineRSquaredParagraphStyleProperty,
  SFCTrendLineShadowProperty,
  SFCTrendLineStrokeProperty,
  SFCValueAxisDateTimeFormatProperty,
  SFCValueAxisDurationFormatProperty,
  SFCValueAxisFormatTypeProperty,
  SFCValueAxisHorizontalDateTimeFormatProperty,
  SFCValueAxisHorizontalDurationFormatProperty,
  SFCValueAxisHorizontalFormatTypeProperty,
  SFCValueAxisHorizontalNumberFormatProperty,
  SFCValueAxisLabelsDepthProperty,
  SFCValueAxisLabelsOpacityProperty,
  SFCValueAxisLabelsOrientationProperty,
  SFCValueAxisLabelsPositionProperty,
  SFCValueAxisLogarithmicProperty,
  SFCValueAxisMajorTickLengthProperty,
  SFCValueAxisMajorTickStrokeProperty,
  SFCValueAxisMaximumValueProperty,
  SFCValueAxisMinimumValueProperty,
  SFCValueAxisMinorTickLengthProperty,
  SFCValueAxisMinorTickStrokeProperty,
  SFCValueAxisNumberFormatProperty,
  SFCValueAxisNumberOfDecadesProperty,
  SFCValueAxisNumberOfStepsProperty,
  SFCValueAxisParagraphStyleProperty,
  SFCValueAxisPercentageProperty,
  SFCValueAxisShowMajorTickMarksProperty,
  SFCValueAxisShowMinimumValueProperty,
  SFCValueAxisShowMinorTickMarksProperty,
  SFCValueAxisTickMarkLocationProperty,
  SFCValueAxisTitleParagraphStyleProperty,
  SFCValueAxisY2DateTimeFormatProperty,
  SFCValueAxisY2DurationFormatProperty,
  SFCValueAxisY2FormatTypeProperty,
  SFCValueAxisY2NumberFormatProperty,
  SFCValueAxisY2ParagraphStyleProperty,
  SFCValueAxisY2TitleParagraphStyleProperty,
  SFCValueNumberFormatDecimalPlacesProperty,
  SFCValueNumberFormatPrefixProperty,
  SFCValueNumberFormatSeparatorProperty,
  SFCValueNumberFormatSuffixProperty,
  SFCValueY2AxisLabelsDepthProperty,
  SFCValueY2AxisLabelsOpacityProperty,
  SFCValueY2AxisLabelsOrientationProperty,
  SFCValueY2AxisLabelsPositionProperty,
  SFCValueY2AxisLogarithmicProperty,
  SFCValueY2AxisMajorTickLengthProperty,
  SFCValueY2AxisMajorTickStrokeProperty,
  SFCValueY2AxisMinorTickLengthProperty,
  SFCValueY2AxisMinorTickStrokeProperty,
  SFCValueY2AxisNumberOfDecadesProperty,
  SFCValueY2AxisNumberOfStepsProperty,
  SFCValueY2AxisPercentageProperty,
  SFCValueY2AxisShowMajorTickMarksProperty,
  SFCValueY2AxisShowMinimumValueProperty,
  SFCValueY2AxisShowMinorTickMarksProperty,
  SFCValueY2AxisTickMarkLocationProperty,
  SFTableCellStylePropertyFill,
  SFTableCellStylePropertyType,
  SFTableStylePropertyBackgroundFill,
  SFTableStylePropertyBorderVectorStyle,
  SFTableStylePropertyCellLayoutStyle,
  SFTableStylePropertyCellParagraphStyle,
  SFTableStylePropertyCellStyle,
  SFTableStylePropertyHeaderBorderVectorStyle,
  SFTableStylePropertyHeaderColumnCellLayoutStyle,
  SFTableStylePropertyHeaderColumnCellParagraphStyle,
  SFTableStylePropertyHeaderColumnCellStyle,
  SFTableStylePropertyHeaderRowCellLayoutStyle,
  SFTableStylePropertyHeaderRowCellParagraphStyle,
  SFTableStylePropertyHeaderRowCellStyle,
  SFTableStylePropertyHeaderSeperatorVectorStyle,
  SFTableStylePropertyHeaderVectorStyle,
  SFTableStylePropertyPrototypeColumnCount,
  SFTableStylePropertyPrototypeGeometry,
  SFTableStylePropertyPrototypeInlineGeometry,
  SFTableStylePropertyPrototypeIsHeaderColumn,
  SFTableStylePropertyPrototypeIsHeaderRow,
  SFTableStylePropertyPrototypeIsResize,
  SFTableStylePropertyPrototypeRowCount,
  SFTableStylePropertyVectorStyle,
  SFTAutoResizeProperty,
  SFTBackgroundProperty,
  SFTCellStylePropertyDateTimeFormat,
  SFTCellStylePropertyDurationFormat,
  SFTCellStylePropertyFormatType,
  SFTCellStylePropertyImplicitFormatType,
  SFTCellStylePropertyLayoutStyle,
  SFTCellStylePropertyNumberFormat,
  SFTCellStylePropertyParagraphStyle,
  SFTCellTextWrapProperty,
  SFTDefaultBodyCellStyleProperty,
  SFTDefaultBodyVectorStyleProperty,
  SFTDefaultBorderVectorStyleProperty,
  SFTDefaultColumnCountProperty,
  SFTDefaultFooterBodyVectorStyleProperty,
  SFTDefaultFooterBorderVectorStyleProperty,
  SFTDefaultFooterRowCellStyleProperty,
  SFTDefaultFooterRowCountProperty,
  SFTDefaultFooterSeparatorVectorStyleProperty,
  SFTDefaultGeometryProperty,
  SFTDefaultGroupingLevel0VectorStyleProperty,
  SFTDefaultGroupingLevel1VectorStyleProperty,
  SFTDefaultGroupingLevel2VectorStyleProperty,
  SFTDefaultGroupingLevel3VectorStyleProperty,
  SFTDefaultGroupingLevel4VectorStyleProperty,
  SFTDefaultGroupingRow0CellStyleProperty,
  SFTDefaultGroupingRow1CellStyleProperty,
  SFTDefaultGroupingRow2CellStyleProperty,
  SFTDefaultGroupingRow3CellStyleProperty,
  SFTDefaultGroupingRow4CellStyleProperty,
  SFTDefaultHeaderBodyVectorStyleProperty,
  SFTDefaultHeaderBorderVectorStyleProperty,
  SFTDefaultHeaderColumnCellStyleProperty,
  SFTDefaultHeaderColumnCountProperty,
  SFTDefaultHeaderRowCellStyleProperty,
  SFTDefaultHeaderRowCountProperty,
  SFTDefaultHeaderSeparatorVectorStyleProperty,
  SFTDefaultInlineGeometryProperty,
  SFTDefaultRowCountProperty,
  SFTDefaultTableNameIsDisplayedProperty,
  SFTGroupingRowFillProperty,
  SFTHeaderColumnRepeatsProperty,
  SFTHeaderRowRepeatsProperty,
  SFTStrokeProperty,
  SFTTableBandedCellFillProperty,
  SFTTableBandedRowsProperty,
  SFTTableBehaviorProperty,
  SFWPAnnotationsVisibleProperty,
  SFWPChangeBarsVisibleProperty,
  SFWPCTFormatChangesVisibleProperty,
  SFWPCTMarkupVisibleProperty,
  SFWPCTShowDeletedTextProperty,
  SFWPShowInvisiblesProperty,
  shadow,
  shadow_ref,
  showInTOC,
  ShowPageGuides,
  size,
  SLBibliographyFormatProperty,
  SLCopyMoviesProperty,
  SLCopyTemplateAssetsProperty,
  SLCreationDateProperty,
  SLCreationLocaleProperty,
  SLCTBubblesVisibilityProperty,
  SLLastModifiedDateProperty,
  SLLastModifiedLocaleProperty,
  SLLastPrintedDateProperty,
  SLNumberOfTimesSavedProperty,
  SLOriginalTemplateName,
  slprint_info,
  SLSaveQuickLookPreviewProperty,
  SLSectionAuthoringProperty,
  SLTOCDisabledStyles,
  SLTOCEnabledStyles,
  SLTOCEntryStyle,
  SLTOCPageNumberStyle,
  SLTOCShowPageNumber,
  SLVisibleLinkedTextBoxConnections,
  sn,
  so,
  sort,
  sort_spec,
  spaceAfter,
  spaceBefore,
  span,
  startKind,
  stops,
  strikethru,
  strikethruColor,
  strikethruWidth,
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
  table_cell_style,
  TableCellStylePropertyFormatDecimals,
  TableCellStylePropertyFormatEnabled,
  TableCellStylePropertyFormatNegativeStyle,
  TableCellStylePropertyFormatPrefix,
  TableCellStylePropertyFormatSuffix,
  TableCellStylePropertyFormatThousandsSeparator,
  table_cell_style_ref,
  table_field,
  table_style,
  table_vector_style,
  table_vector_style_ref,
  TableVectorStyleStrokeProperty,
  TableVectorStyleTypeProperty,
  tabs,
  tabs_ref,
  tabstop,
  tabular_info,
  tabular_model,
  tabular_style,
  tabular_style_ref,
  tailLineEnd,
  tailOffset,
  text,
  textBackground,
  text_body,
  textBorders,
  textbox_chain,
  text_label,
  text_label_ref,
  textShadow,
  text_storage,
  text_storage_ref,
  textured_fill,
  thumbnails,
  title,
  toc,
  toc_bookmark,
  toc_content,
  toc_empty,
  toc_pagenum,
  tocstyle,
  tocStyle,
  tocstyle_ref,
  traced_path,
  tracking,
  underline,
  underlineColor,
  underlineWidth,
  unfiltered,
  unfiltered_ref,
  value,
  vector3d,
  vector_style,
  vector_style_ref,
  version_history,
  verticalAlignment,
  vertical_gridline_styles,
  widowControl,
  window_config,
  window_configs,
  word_strikethrough,
  word_underline,
  wp_selection,
  wrap,

  // attributes
  a,
  align,
  alpha_threshold,
  amt,
  anchor_loc,
  angle,
  app_build_date,
  array_size,
  aspectRatioLocked,
  attachment_wrap_type,
  b,
  bookmark,
  bottom,
  c,
  cap,
  category,
  checksum,
  cindex,
  col_span,
  compatible_version,
  component,
  count,
  date_style,
  direction,
  displayname,
  enabled,
  filterClassName,
  filter_col,
  first,
  fitting_height,
  fitting_width,
  floating_wrap_enabled,
  floating_wrap_type,
  fmt,
  format,
  format_currency_code,
  format_decimal_places,
  format_fraction_accuracy,
  format_negative_style,
  format_show_thousands_separator,
  format_string,
  format_type,
  format_use_accounting_style,
  fraction,
  frame,
  frame_h,
  frame_w,
  frame_x,
  frame_y,
  fs,
  g,
  generator,
  gridline_index,
  grouping_enabled,
  guides_visible,
  h,
  header_columns_frozen,
  header_rows_frozen,
  height,
  hfs_type,
  hiddennumcols,
  hiddennumrows,
  ho,
  href,
  id,
  ID,
  ident,
  identifier,
  IDREF,
  implicit_format_type,
  inflection,
  inline_wrap_enabled,
  is_null,
  join,
  k,
  key,
  key1,
  keyscale,
  kind,
  label,
  layout_version,
  left,
  left_bar_state,
  lindex,
  linkable,
  list_level,
  locale,
  localize,
  m,
  margin,
  miter_limit,
  mode,
  name,
  name_is_visible,
  nc,
  ncc,
  ncoc,
  nlabel,
  nsc,
  numcols,
  num_footer_rows,
  num_header_columns,
  num_header_rows,
  numrows,
  ocnt,
  offset,
  order,
  page,
  page_count,
  pageguides_visible,
  page_height,
  page_index,
  page_scale,
  page_width,
  parent_ident,
  phase,
  placeholder,
  pos,
  predicate,
  preferred_height,
  preferred_width,
  property,
  radius,
  regen,
  resource_type,
  restart_list,
  right,
  rpage,
  scale,
  scale_with_text,
  seriesIndex,
  sfclass,
  sharable,
  show_ruler,
  show_sidebar,
  sidebar_character_pct,
  sidebar_list_pct,
  sidebar_paragraph_pct,
  sindex,
  sizesLocked,
  sort_col,
  sort_order,
  spec_count,
  start_index,
  stop_index,
  tabular_style_name_internal,
  technique,
  thumbnail_height,
  thumbnail_width,
  time_style,
  top,
  traced_threshold,
  tracking_view_mode,
  type,
  v,
  val,
  version,
  w,
  width,
  wrap_style,
  x,
  y,
  z,

  // attribute values
  body,
  cell,
  footnote,
  note,
  textbox,

  LAST_TOKEN
};

// namespaces
enum
{
  TOKEN_RANGE = 2 << (detail::log<LAST_TOKEN + 1>::value + 1),
  NS_NONE = TOKEN_RANGE,
  NS_URI_SF = NS_NONE + TOKEN_RANGE,
  NS_URI_SFA = NS_URI_SF + TOKEN_RANGE,
  NS_URI_SL = NS_URI_SFA + TOKEN_RANGE,
  NS_URI_XSI = NS_URI_SL + TOKEN_RANGE
};

}

struct PAGESTokenizer
{
  int operator()(const char *str) const;
};

}

#endif // PAGESTOKEN_H_INCLUDED

/* vim:set shiftwidth=2 softtabstop=2 expandtab: */
[MeterItem1Background]
Meter=Shape
X=#TileX#
Y=#Tile1Y#
Shape=Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileFill# | StrokeWidth 1 | Stroke Color #TileBorder#

[MeterItem1Number]
Meter=String
MeterStyle=MeterStyleCardNumber
Text=#Item1Number#
X=48
Y=317

[MeterItem1Title]
Meter=String
MeterStyle=MeterStyleCardTitle
Text=#Item1Title#
X=83
Y=312

[MeterItem1Subtitle]
Meter=String
MeterStyle=MeterStyleCardSubtitle
Text=#Item1Subtitle#
X=83
Y=341

[MeterItem1Arrow]
Meter=String
MeterStyle=MeterStyleCardArrow
Text=>
X=373
Y=310

[MeterItem1Hitbox]
Meter=Shape
X=#TileX#
Y=#Tile1Y#
Shape=Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color 0,0,0,1 | StrokeWidth 0
LeftMouseUpAction=["#Item1Path#"]
MouseOverAction=[!SetOption MeterItem1Background Shape "Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileHover# | StrokeWidth 1 | Stroke Color #TileHoverBorder#"][!UpdateMeter MeterItem1Background][!Redraw]
MouseLeaveAction=[!SetOption MeterItem1Background Shape "Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileFill# | StrokeWidth 1 | Stroke Color #TileBorder#"][!UpdateMeter MeterItem1Background][!Redraw]
MouseActionCursor=1
ToolTipText=#Item1Tooltip#
DynamicVariables=1

[MeterItem2Background]
Meter=Shape
X=#TileX#
Y=#Tile2Y#
Shape=Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileFill# | StrokeWidth 1 | Stroke Color #TileBorder#

[MeterItem2Number]
Meter=String
MeterStyle=MeterStyleCardNumber
Text=#Item2Number#
X=48
Y=403

[MeterItem2Title]
Meter=String
MeterStyle=MeterStyleCardTitle
Text=#Item2Title#
X=83
Y=398

[MeterItem2Subtitle]
Meter=String
MeterStyle=MeterStyleCardSubtitle
Text=#Item2Subtitle#
X=83
Y=427

[MeterItem2Arrow]
Meter=String
MeterStyle=MeterStyleCardArrow
Text=>
X=373
Y=396

[MeterItem2Hitbox]
Meter=Shape
X=#TileX#
Y=#Tile2Y#
Shape=Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color 0,0,0,1 | StrokeWidth 0
LeftMouseUpAction=["#Item2Path#"]
MouseOverAction=[!SetOption MeterItem2Background Shape "Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileHover# | StrokeWidth 1 | Stroke Color #TileHoverBorder#"][!UpdateMeter MeterItem2Background][!Redraw]
MouseLeaveAction=[!SetOption MeterItem2Background Shape "Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileFill# | StrokeWidth 1 | Stroke Color #TileBorder#"][!UpdateMeter MeterItem2Background][!Redraw]
MouseActionCursor=1
ToolTipText=#Item2Tooltip#
DynamicVariables=1

[MeterItem3Background]
Meter=Shape
X=#TileX#
Y=#Tile3Y#
Shape=Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileFill# | StrokeWidth 1 | Stroke Color #TileBorder#

[MeterItem3Number]
Meter=String
MeterStyle=MeterStyleCardNumber
Text=#Item3Number#
X=48
Y=489

[MeterItem3Title]
Meter=String
MeterStyle=MeterStyleCardTitle
Text=#Item3Title#
X=83
Y=484

[MeterItem3Subtitle]
Meter=String
MeterStyle=MeterStyleCardSubtitle
Text=#Item3Subtitle#
X=83
Y=513

[MeterItem3Arrow]
Meter=String
MeterStyle=MeterStyleCardArrow
Text=>
X=373
Y=482

[MeterItem3Hitbox]
Meter=Shape
X=#TileX#
Y=#Tile3Y#
Shape=Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color 0,0,0,1 | StrokeWidth 0
LeftMouseUpAction=["#Item3Path#"]
MouseOverAction=[!SetOption MeterItem3Background Shape "Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileHover# | StrokeWidth 1 | Stroke Color #TileHoverBorder#"][!UpdateMeter MeterItem3Background][!Redraw]
MouseLeaveAction=[!SetOption MeterItem3Background Shape "Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileFill# | StrokeWidth 1 | Stroke Color #TileBorder#"][!UpdateMeter MeterItem3Background][!Redraw]
MouseActionCursor=1
ToolTipText=#Item3Tooltip#
DynamicVariables=1

[MeterItem4Background]
Meter=Shape
X=#TileX#
Y=#Tile4Y#
Shape=Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileFill# | StrokeWidth 1 | Stroke Color #TileBorder#

[MeterItem4Number]
Meter=String
MeterStyle=MeterStyleCardNumber
Text=#Item4Number#
X=48
Y=575

[MeterItem4Title]
Meter=String
MeterStyle=MeterStyleCardTitle
Text=#Item4Title#
X=83
Y=570

[MeterItem4Subtitle]
Meter=String
MeterStyle=MeterStyleCardSubtitle
Text=#Item4Subtitle#
X=83
Y=599

[MeterItem4Arrow]
Meter=String
MeterStyle=MeterStyleCardArrow
Text=>
X=373
Y=568

[MeterItem4Hitbox]
Meter=Shape
X=#TileX#
Y=#Tile4Y#
Shape=Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color 0,0,0,1 | StrokeWidth 0
LeftMouseUpAction=["#Item4Path#"]
MouseOverAction=[!SetOption MeterItem4Background Shape "Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileHover# | StrokeWidth 1 | Stroke Color #TileHoverBorder#"][!UpdateMeter MeterItem4Background][!Redraw]
MouseLeaveAction=[!SetOption MeterItem4Background Shape "Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileFill# | StrokeWidth 1 | Stroke Color #TileBorder#"][!UpdateMeter MeterItem4Background][!Redraw]
MouseActionCursor=1
ToolTipText=#Item4Tooltip#
DynamicVariables=1

[MeterItem5Background]
Meter=Shape
X=#TileX#
Y=#Tile5Y#
Shape=Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileFill# | StrokeWidth 1 | Stroke Color #TileBorder#

[MeterItem5Number]
Meter=String
MeterStyle=MeterStyleCardNumber
Text=#Item5Number#
X=48
Y=661

[MeterItem5Title]
Meter=String
MeterStyle=MeterStyleCardTitle
Text=#Item5Title#
X=83
Y=656

[MeterItem5Subtitle]
Meter=String
MeterStyle=MeterStyleCardSubtitle
Text=#Item5Subtitle#
X=83
Y=685

[MeterItem5Arrow]
Meter=String
MeterStyle=MeterStyleCardArrow
Text=>
X=373
Y=654

[MeterItem5Hitbox]
Meter=Shape
X=#TileX#
Y=#Tile5Y#
Shape=Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color 0,0,0,1 | StrokeWidth 0
LeftMouseUpAction=["#Item5Path#"]
MouseOverAction=[!SetOption MeterItem5Background Shape "Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileHover# | StrokeWidth 1 | Stroke Color #TileHoverBorder#"][!UpdateMeter MeterItem5Background][!Redraw]
MouseLeaveAction=[!SetOption MeterItem5Background Shape "Rectangle 0,0,#TileW#,#TileH#,#TileRadius# | Fill Color #TileFill# | StrokeWidth 1 | Stroke Color #TileBorder#"][!UpdateMeter MeterItem5Background][!Redraw]
MouseActionCursor=1
ToolTipText=#Item5Tooltip#
DynamicVariables=1

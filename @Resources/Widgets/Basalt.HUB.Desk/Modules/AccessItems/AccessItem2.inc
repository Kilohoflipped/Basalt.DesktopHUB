[MeterItem2Background]
DynamicVariables=1
Meter=Shape
X=#TileX#
Y=#Tile2Y#
Shape=#TileBackgroundShapeDefault#

[MeterItem2Icon]
AntiAlias=1
PreserveAspectRatio=1
Meter=Image
X=#TileItemIconX#
Y=(#Tile2Y#+#TileItemIconYDelta#)
ImageName=#@#Assets\#Item2Icon#
W=#TileItemIconSize#
H=#TileItemIconSize#

[MeterItem2Title]
Meter=String
X=#TileItemTitleX#
Y=(#Tile2Y#+#TileItemTitleYDelta#)
Text=#Item2Title#
MeterStyle=MeterStyleCardTitle

[MeterItem2Subtitle]
Meter=String
X=#TileItemSubtitleX#
Y=(#Tile2Y#+#TileItemSubtitleYDelta#)
Text=#Item2Subtitle#
MeterStyle=MeterStyleCardSubtitle

[MeterItem2Arrow]
Meter=String
X=#TileItemArrowX#
Y=(#Tile2Y#+#TileItemArrowYDelta#)
Text=#Item2Arrow#
MeterStyle=MeterStyleCardArrow

[MeterItem2Hitbox]
DynamicVariables=1
Meter=Shape
X=#TileX#
Y=#Tile2Y#
Shape=#TileHitboxShape#
LeftMouseUpAction=["explorer.exe" "#Item2Path#"]
MouseActionCursor=1
MouseOverAction=[!SetOption MeterItem2Background Shape "#TileBackgroundShapeHover#"][!UpdateMeter MeterItem2Background][!Redraw]
MouseLeaveAction=[!SetOption MeterItem2Background Shape "#TileBackgroundShapeDefault#"][!UpdateMeter MeterItem2Background][!Redraw]

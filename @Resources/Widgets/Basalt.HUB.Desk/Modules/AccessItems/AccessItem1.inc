[MeterItem1Background]
DynamicVariables=1
Meter=Shape
X=#TileX#
Y=#Tile1Y#
Shape=#TileBackgroundShapeDefault#

[MeterItem1Icon]
AntiAlias=1
PreserveAspectRatio=1
Meter=Image
X=#TileItemIconX#
Y=(#Tile1Y#+#TileItemIconYDelta#)
ImageName=#@#Assets\#Item1Icon#
W=#TileItemIconSize#
H=#TileItemIconSize#

[MeterItem1Title]
Meter=String
X=#TileItemTitleX#
Y=(#Tile1Y#+#TileItemTitleYDelta#)
Text=#Item1Title#
MeterStyle=MeterStyleCardTitle

[MeterItem1Subtitle]
Meter=String
X=#TileItemSubtitleX#
Y=(#Tile1Y#+#TileItemSubtitleYDelta#)
Text=#Item1Subtitle#
MeterStyle=MeterStyleCardSubtitle

[MeterItem1Arrow]
Meter=String
X=#TileItemArrowX#
Y=(#Tile1Y#+#TileItemArrowYDelta#)
Text=#Item1Arrow#
MeterStyle=MeterStyleCardArrow

[MeterItem1Hitbox]
DynamicVariables=1
Meter=Shape
X=#TileX#
Y=#Tile1Y#
Shape=#TileHitboxShape#
LeftMouseUpAction=["explorer.exe" "#Item1Path#"]
MouseActionCursor=1
MouseOverAction=[!SetOption MeterItem1Background Shape "#TileBackgroundShapeHover#"][!UpdateMeter MeterItem1Background][!Redraw]
MouseLeaveAction=[!SetOption MeterItem1Background Shape "#TileBackgroundShapeDefault#"][!UpdateMeter MeterItem1Background][!Redraw]

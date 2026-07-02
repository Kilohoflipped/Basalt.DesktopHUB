[MeterItem4Background]
DynamicVariables=1
Meter=Shape
X=#TileX#
Y=#Tile4Y#
Shape=#TileBackgroundShapeDefault#

[MeterItem4Icon]
AntiAlias=1
PreserveAspectRatio=1
Meter=Image
X=#TileItemIconX#
Y=(#Tile4Y#+#TileItemIconYDelta#)
ImageName=#@#Assets\#Item4Icon#
W=#TileItemIconSize#
H=#TileItemIconSize#

[MeterItem4Title]
Meter=String
X=#TileItemTitleX#
Y=(#Tile4Y#+#TileItemTitleYDelta#)
Text=#Item4Title#
MeterStyle=MeterStyleCardTitle

[MeterItem4Subtitle]
Meter=String
X=#TileItemSubtitleX#
Y=(#Tile4Y#+#TileItemSubtitleYDelta#)
Text=#Item4Subtitle#
MeterStyle=MeterStyleCardSubtitle

[MeterItem4Arrow]
Meter=String
X=#TileItemArrowX#
Y=(#Tile4Y#+#TileItemArrowYDelta#)
Text=#Item4Arrow#
MeterStyle=MeterStyleCardArrow

[MeterItem4Hitbox]
DynamicVariables=1
Meter=Shape
X=#TileX#
Y=#Tile4Y#
Shape=#TileHitboxShape#
LeftMouseUpAction=["explorer.exe" "#Item4Path#"]
MouseActionCursor=1
MouseOverAction=[!SetOption MeterItem4Background Shape "#TileBackgroundShapeHover#"][!UpdateMeter MeterItem4Background][!Redraw]
MouseLeaveAction=[!SetOption MeterItem4Background Shape "#TileBackgroundShapeDefault#"][!UpdateMeter MeterItem4Background][!Redraw]

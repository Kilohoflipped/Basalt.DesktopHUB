[MeterItem3Background]
DynamicVariables=1
Meter=Shape
X=#TileX#
Y=#Tile3Y#
Shape=#TileBackgroundShapeDefault#

[MeterItem3Icon]
AntiAlias=1
PreserveAspectRatio=1
Meter=Image
X=#TileItemIconX#
Y=(#Tile3Y#+#TileItemIconYDelta#)
ImageName=#@#Assets\#Item3Icon#
W=#TileItemIconSize#
H=#TileItemIconSize#

[MeterItem3Title]
Meter=String
X=#TileItemTitleX#
Y=(#Tile3Y#+#TileItemTitleYDelta#)
Text=#Item3Title#
MeterStyle=MeterStyleCardTitle

[MeterItem3Subtitle]
Meter=String
X=#TileItemSubtitleX#
Y=(#Tile3Y#+#TileItemSubtitleYDelta#)
Text=#Item3Subtitle#
MeterStyle=MeterStyleCardSubtitle

[MeterItem3Arrow]
Meter=String
X=#TileItemArrowX#
Y=(#Tile3Y#+#TileItemArrowYDelta#)
Text=#Item3Arrow#
MeterStyle=MeterStyleCardArrow

[MeterItem3Hitbox]
DynamicVariables=1
Meter=Shape
X=#TileX#
Y=#Tile3Y#
Shape=#TileHitboxShape#
LeftMouseUpAction=["explorer.exe" "#Item3Path#"]
MouseActionCursor=1
MouseOverAction=[!SetOption MeterItem3Background Shape "#TileBackgroundShapeHover#"][!UpdateMeter MeterItem3Background][!Redraw]
MouseLeaveAction=[!SetOption MeterItem3Background Shape "#TileBackgroundShapeDefault#"][!UpdateMeter MeterItem3Background][!Redraw]

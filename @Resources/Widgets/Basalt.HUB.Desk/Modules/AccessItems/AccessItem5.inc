[MeterItem5Background]
DynamicVariables=1
Meter=Shape
X=#TileX#
Y=#Tile5Y#
Shape=#TileBackgroundShapeDefault#

[MeterItem5Icon]
AntiAlias=1
PreserveAspectRatio=1
Meter=Image
X=#TileItemIconX#
Y=(#Tile5Y#+#TileItemIconYDelta#)
ImageName=#@#Assets\#Item5Icon#
W=#TileItemIconSize#
H=#TileItemIconSize#

[MeterItem5Title]
Meter=String
X=#TileItemTitleX#
Y=(#Tile5Y#+#TileItemTitleYDelta#)
Text=#Item5Title#
MeterStyle=MeterStyleCardTitle

[MeterItem5Subtitle]
Meter=String
X=#TileItemSubtitleX#
Y=(#Tile5Y#+#TileItemSubtitleYDelta#)
Text=#Item5Subtitle#
MeterStyle=MeterStyleCardSubtitle

[MeterItem5Arrow]
Meter=String
X=#TileItemArrowX#
Y=(#Tile5Y#+#TileItemArrowYDelta#)
Text=#Item5Arrow#
MeterStyle=MeterStyleCardArrow

[MeterItem5Hitbox]
DynamicVariables=1
Meter=Shape
X=#TileX#
Y=#Tile5Y#
Shape=#TileHitboxShape#
LeftMouseUpAction=["explorer.exe" "#Item5Path#"]
MouseActionCursor=1
MouseOverAction=[!SetOption MeterItem5Background Shape "#TileBackgroundShapeHover#"][!UpdateMeter MeterItem5Background][!Redraw]
MouseLeaveAction=[!SetOption MeterItem5Background Shape "#TileBackgroundShapeDefault#"][!UpdateMeter MeterItem5Background][!Redraw]

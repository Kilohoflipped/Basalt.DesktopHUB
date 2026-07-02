[MeterItem6Background]
DynamicVariables=1
Meter=Shape
X=#TileX#
Y=#Tile6Y#
Shape=#TileBackgroundShapeDefault#

[MeterItem6Icon]
AntiAlias=1
PreserveAspectRatio=1
Meter=Image
X=#TileItemIconX#
Y=(#Tile6Y#+#TileItemIconYDelta#)
ImageName=#@#Assets\#Item6Icon#
W=#TileItemIconSize#
H=#TileItemIconSize#

[MeterItem6Title]
Meter=String
X=#TileItemTitleX#
Y=(#Tile6Y#+#TileItemTitleYDelta#)
Text=#Item6Title#
MeterStyle=MeterStyleCardTitle

[MeterItem6Subtitle]
Meter=String
X=#TileItemSubtitleX#
Y=(#Tile6Y#+#TileItemSubtitleYDelta#)
Text=#Item6Subtitle#
MeterStyle=MeterStyleCardSubtitle

[MeterItem6Arrow]
Meter=String
X=#TileItemArrowX#
Y=(#Tile6Y#+#TileItemArrowYDelta#)
Text=#Item6Arrow#
MeterStyle=MeterStyleCardArrow

[MeterItem6Hitbox]
DynamicVariables=1
Meter=Shape
X=#TileX#
Y=#Tile6Y#
Shape=#TileHitboxShape#
LeftMouseUpAction=["explorer.exe" "#Item6Path#"]
MouseActionCursor=1
MouseOverAction=[!SetOption MeterItem6Background Shape "#TileBackgroundShapeHover#"][!UpdateMeter MeterItem6Background][!Redraw]
MouseLeaveAction=[!SetOption MeterItem6Background Shape "#TileBackgroundShapeDefault#"][!UpdateMeter MeterItem6Background][!Redraw]

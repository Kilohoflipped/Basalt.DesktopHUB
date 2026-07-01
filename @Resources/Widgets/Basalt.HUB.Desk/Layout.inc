[Variables]
; ==================================
; 主容器
; ==================================
; 主容器位置
PanelX=72
PanelY=166
; 主容器几何
PanelW=430
PanelH=900
PanelRadius=22
PanelShape=Rectangle 0,0,#PanelW#,#PanelH#,#PanelRadius#
PanelStrokeWidth=1
; 主容器Padding量
PanelPaddingX=32
PanelPaddingY=38
; 主容器内部宽度
PanelInnerW=(#PanelW#-2*#PanelPaddingX#)

; ==================================
; Header
; ==================================
; HearDot位置
HeaderStatusDotX=#PanelPaddingX#
HeaderStatusDotY=#PanelPaddingY#
; HeaderDot几何
HeaderStatusDotDiameter=4
HeaderStatusDotDiameterShape=Ellipse 0,0,#HeaderStatusDotDiameter#,#HeaderStatusDotDiameter#
HeaderStatusDotStrokeWidth=0

; HeaderCode位置
HeaderCodeX=(#PanelPaddingX#+3*#HeaderStatusDotDiameter#)
HeaderCodeY=(#PanelPaddingY#-#HeaderCodeFontSize#)
; HeaderCode几何
HeaderCodeFontSize=10


HeaderMarkX=376
HeaderMarkY=21

TimeX=31
TimeY=64
DateX=245
DateY=76
DayX=245
DayY=99
DividerTopY=154
DeskTitleY=182
DeskSubtitleY=214
SectionAccentY=267
SectionTitleY=264

; ==================================
; QuickAccess
; ==================================
TileX=30
TileW=370
TileH=74
TileRadius=14

Tile1Y=302
Tile2Y=388
Tile3Y=474
Tile4Y=560
Tile5Y=646

; ==================================
; Footer
; ==================================
FooterDividerY=757
FooterMarkX=38
FooterMarkY=779
FooterNameX=78
FooterNameY=781
FooterChineseX=78
FooterChineseY=824
FooterTaglineX=391
FooterTaglineY=789
FooterCodeY=861
FooterBarsX=366
FooterBarsY=858

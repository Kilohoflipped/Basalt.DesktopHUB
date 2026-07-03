[Variables]
; ==================================
; 前景色交互模式。
; 此处不定义具体颜色值；全部引用稳定颜色角色。
; 此处描述颜色在 Hover、Pressed、Selected 等状态下的变化。
; 前景色禁用状态应直接使用 ColorNeutralForegroundDisabled。
; ==================================

; 中性交互模式。

; 次级操作。
; 例："查看详情"、"更多"、"重新扫描"等可点击文字操作。
; 默认保持次级信息强度；交互后提升为主要内容前景。
; Secondary -> Primary
ColorSecondaryActionForeground=#ColorNeutralForegroundSecondary#
ColorSecondaryActionForegroundHover=#ColorNeutralForegroundPrimary#
ColorSecondaryActionForegroundPressed=#ColorNeutralForegroundPrimary#
ColorSecondaryActionForegroundSelected=#ColorNeutralForegroundPrimary#

; 辅助操作。
; 例："弱图标"、"轻量辅助操作"、"非关键入口"等。
; 默认保持三级信息强度；交互后提升为次级前景。
; Tertiary -> Secondary
ColorSubtleActionForeground=#ColorNeutralForegroundTertiary#
ColorSubtleActionForegroundHover=#ColorNeutralForegroundSecondary#
ColorSubtleActionForegroundPressed=#ColorNeutralForegroundSecondary#
ColorSubtleActionForegroundSelected=#ColorNeutralForegroundSecondary#

; 显现式操作。
; 例："适用于关闭按钮"、"卡片角落操作"、"工具栏图标"等。
; 默认不打扰阅读，Hover 后需要明确显现其可操作性。
; Tertiary -> Primary
ColorRevealActionForeground=#ColorNeutralForegroundTertiary#
ColorRevealActionForegroundHover=#ColorNeutralForegroundPrimary#
ColorRevealActionForegroundPressed=#ColorNeutralForegroundPrimary#
ColorRevealActionForegroundSelected=#ColorNeutralForegroundPrimary#

; 品牌交互模式。
; 默认以中性色保持克制；交互后进入品牌态。
; 例："导航项"、"切换项"、"收藏"、"可激活图标与品牌强调操作"等。

; 品牌操作。
; 例："默认状态已具有次级信息权重的可操作内容"等。
; Secondary -> Brand -> Brand Strong
ColorBrandActionForeground=#ColorNeutralForegroundSecondary#
ColorBrandActionForegroundHover=#ColorBrandForeground#
ColorBrandActionForegroundPressed=#ColorBrandForegroundStrong#
ColorBrandActionForegroundSelected=#ColorBrandForeground#

; 辅助品牌操作。
; 例："默认状态应尽量安静、但交互后需通过品牌色明确提示的入口"等。
; Tertiary -> Brand -> Brand Strong
ColorSubtleBrandActionForeground=#ColorNeutralForegroundTertiary#
ColorSubtleBrandActionForegroundHover=#ColorBrandForeground#
ColorSubtleBrandActionForegroundPressed=#ColorBrandForegroundStrong#
ColorSubtleBrandActionForegroundSelected=#ColorBrandForeground#

; ==================================
; 背景交互模式。
; 此处不直接写具体颜色；全部引用背景外观角色。
; ==================================

; 显现式操作。
; 静止时不产生背景；Hover、Pressed、Selected 时出现低强调中性填充。
; 适用于工具栏图标、卡片角落按钮、弱操作入口等。
ColorSubtleActionBackground=#ColorTransparentBackground#
ColorSubtleActionBackgroundHover=#ColorNeutralBackgroundSubtleHover#
ColorSubtleActionBackgroundPressed=#ColorNeutralBackgroundSubtlePressed#
ColorSubtleActionBackgroundSelected=#ColorNeutralBackgroundSubtleSelected#

; 透明操作。
; 所有状态均不通过背景表达反馈。
; 仅适用于反馈由前景、描边、下划线或位移承担的元素。
ColorTransparentActionBackground=#ColorTransparentBackground#
ColorTransparentActionBackgroundHover=#ColorTransparentBackground#
ColorTransparentActionBackgroundPressed=#ColorTransparentBackground#
ColorTransparentActionBackgroundSelected=#ColorTransparentBackground#

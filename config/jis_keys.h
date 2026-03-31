// JIS キーコード定義
// Windows を「日本語キーボード(106/109)」設定で使用する際のキーマップ用

#pragma once

// --- JIS 記号キー（US配列コードとJIS物理位置の対応） ---
#define JP_ZKHK  GRAVE        // 半角/全角
#define JP_1     N1
#define JP_2     N2
#define JP_3     N3
#define JP_4     N4
#define JP_5     N5
#define JP_6     N6
#define JP_7     N7
#define JP_8     N8
#define JP_9     N9
#define JP_0     N0
#define JP_MINS  MINUS        // -
#define JP_CIRC  EQUAL        // ^ (JISの^キー)
#define JP_YEN   INT3         // ¥
#define JP_AT    LBKT         // @
#define JP_LBRC  RBKT         // [
#define JP_RBRC  NUHS         // ]  ※ NUHS = Non-US Hash
#define JP_SCLN  SEMI         // ;
#define JP_COLN  SQT          // :
#define JP_BSLS  INT1         // \（バックスラッシュ）
#define JP_COMM  COMMA        // ,
#define JP_DOT   DOT          // .
#define JP_SLSH  FSLH         // /
#define JP_MHEN  INT5         // 無変換
#define JP_HENK  INT4         // 変換
#define JP_KANA  INT2         // カタカナ/ひらがな

// --- Shift あり ---
#define JP_EXLM  LS(JP_1)    // !
#define JP_DQT   LS(JP_2)    // "
#define JP_HASH  LS(JP_3)    // #
#define JP_DLR   LS(JP_4)    // $
#define JP_PERC  LS(JP_5)    // %
#define JP_AMPR  LS(JP_6)    // &
#define JP_QUOT  LS(JP_7)    // '
#define JP_LPRN  LS(JP_8)    // (
#define JP_RPRN  LS(JP_9)    // )
#define JP_EQL   LS(JP_MINS) // =
#define JP_TILD  LS(JP_CIRC) // ~
#define JP_PIPE  LS(JP_YEN)  // |
#define JP_GRV   LS(JP_AT)   // `
#define JP_LCBR  LS(JP_LBRC) // {
#define JP_RCBR  LS(JP_RBRC) // }
#define JP_PLUS  LS(JP_SCLN) // +
#define JP_ASTR  LS(JP_COLN) // *
#define JP_UNDS  LS(JP_BSLS) // _
#define JP_LT    LS(JP_COMM) // <
#define JP_GT    LS(JP_DOT)  // >
#define JP_QUES  LS(JP_SLSH) // ?

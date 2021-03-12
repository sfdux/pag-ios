#import <Foundation/Foundation.h>
#include "CocoaUtils.h"

enum {
    PAGJustificationLeftJustify = 0,
    PAGJustificationCenterJustify = 1,
    PAGJustificationRightJustify = 2,
    PAGJustificationFullJustifyLastLineLeft = 3,
    PAGJustificationFullJustifyLastLineRight = 4,
    PAGJustificationFullJustifyLastLineCenter = 5,
    PAGJustificationFullJustifyLastLineFull = 6
};

/**
  * The PAGText object stores a value for a TextLayer's Source Text property.
  */
@interface PAGText : NSObject

/**
* When true, the text layer shows a fill.
*/
@property(nonatomic, assign) bool applyFill;

/**
 * When true, the text layer shows a stroke.
 */
@property(nonatomic, assign) bool applyStroke;

@property(nonatomic, assign) float baselineShift;
/**
 * When true, the text layer is paragraph (bounded) text.
 */
@property(nonatomic, assign) bool boxText;

/**
 * For box text, the pixel boundary for the text bounds.
 */
@property(nonatomic, assign) CGRect boxTextRect;

@property(nonatomic, assign) float firstBaseLine;

@property(nonatomic, assign) bool fauxBold;

@property(nonatomic, assign) bool fauxItalic;

/**
 * The text layer’s fill color.
 */
@property(nonatomic, strong) CocoaColor *fillColor;

/**
 * A string with the name of the font family.
 **/
@property(nonatomic, copy) NSString *fontFamily;

/**
 * A string with the style information — e.g., “bold”, “italic”.
 **/
@property(nonatomic, copy) NSString *fontStyle;

/**
 * The text layer’s font size in pixels.
 */
@property(nonatomic, assign) float fontSize;

/**
 * The text layer’s stroke color.
 */
@property(nonatomic, strong) CocoaColor *strokeColor;

/**
 * Indicates the rendering order for the fill and stroke of a text layer.
 */
@property(nonatomic, assign) bool strokeOverFill;

/**
 * The text layer’s stroke thickness.
 */
@property(nonatomic, assign) float strokeWidth;

/**
 * The text layer’s Source Text value.
 */
@property(nonatomic, copy) NSString *text;

/**
* The paragraph justification for the text layer. Such as : PAGJustificationLeftJustify, PAGJustificationCenterJustify...
*/
@property(nonatomic, assign) uint8_t justification;

/**
 * The space between lines, 0 indicates 'auto', which is fontSize * 1.2
 */
@property(nonatomic, assign) float leading;

/**
 * The text layer’s spacing between characters.
 */
@property(nonatomic, assign) float tracking;

/**
 * The text layer’s background color.
 */
@property(nonatomic, strong) CocoaColor *backgroundColor;

/**
 * The text layer’s background alpha. 0 = 100% transparent, 255 = 100% opaque.
 */
@property(nonatomic, assign) int backgroundAlpha;

@end

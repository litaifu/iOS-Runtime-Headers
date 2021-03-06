/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVerticalTextStackViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild> {
    LPTextRowStyle * _aboveTopCaption;
    LPTextRowStyle * _belowBottomCaption;
    LPTextRowStyle * _bottomCaption;
    LPPadding * _captionTextPadding;
    LPPadding * _emailCompatibleMargin;
    LPPointUnit * _firstLineLeading;
    LPPointUnit * _lastLineDescent;
    LPTextRowStyle * _topCaption;
}

@property (nonatomic, readonly) LPTextRowStyle *aboveTopCaption;
@property (nonatomic, readonly) LPTextRowStyle *belowBottomCaption;
@property (nonatomic, readonly) LPTextRowStyle *bottomCaption;
@property (nonatomic, readonly, retain) LPPadding *captionTextPadding;
@property (nonatomic, readonly, retain) LPPadding *emailCompatibleMargin;
@property (nonatomic, retain) LPPointUnit *firstLineLeading;
@property (nonatomic, retain) LPPointUnit *lastLineDescent;
@property (nonatomic, readonly) LPTextRowStyle *topCaption;

- (void).cxx_destruct;
- (id)aboveTopCaption;
- (id)belowBottomCaption;
- (id)bottomCaption;
- (id)captionTextPadding;
- (id)emailCompatibleMargin;
- (id)firstLineLeading;
- (id)initWithPlatform:(int)arg1;
- (id)lastLineDescent;
- (void)setFirstLineLeading:(id)arg1;
- (void)setLastLineDescent:(id)arg1;
- (id)topCaption;

@end

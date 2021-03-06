/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGridlineResource : TSCH3DResource {
    TSCH3DAxisGridEnumerator * mAxis;
}

@property (nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) float opacity;
@property (nonatomic, readonly) TSDStroke *stroke;

+ (id)resourceWithAxisEnumerator:(id)arg1;

- (void)dealloc;
- (BOOL)enabled;
- (id)get;
- (id)initWithAxisEnumerator:(id)arg1;
- (float)opacity;
- (id)stroke;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessState : NSObject <NSCopying> {
    int _effectiveVisibility;
    int _pid;
    int _taskState;
    int _visibility;
    bool_foreground;
    bool_running;
}

@property int effectiveVisibility;
@property(getter=isForeground) bool foreground;
@property int pid;
@property(getter=isRunning) bool running;
@property int taskState;
@property int visibility;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)effectiveVisibility;
- (id)init;
- (id)initWithPid:(int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isForeground;
- (bool)isRunning;
- (int)pid;
- (void)setEffectiveVisibility:(int)arg1;
- (void)setForeground:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setRunning:(bool)arg1;
- (void)setTaskState:(int)arg1;
- (void)setVisibility:(int)arg1;
- (int)taskState;
- (int)visibility;

@end
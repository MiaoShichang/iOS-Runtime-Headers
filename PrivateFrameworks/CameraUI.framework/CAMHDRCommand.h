/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMHDRCommand : CAMCaptureCommand <NSCoding, NSCopying> {
    int  __HDRMode;
    BOOL  __shouldCaptureOriginal;
}

@property (nonatomic, readonly) int _HDRMode;
@property (nonatomic, readonly) BOOL _shouldCaptureOriginal;

- (int)_HDRMode;
- (int)_captureHDRModeForHDRMode:(int)arg1;
- (BOOL)_shouldCaptureOriginal;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHDRMode:(int)arg1;
- (id)initWithHDRMode:(int)arg1 shouldCaptureOriginal:(BOOL)arg2;

@end

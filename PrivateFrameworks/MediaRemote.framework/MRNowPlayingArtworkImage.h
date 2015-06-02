/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork {
    NSData *_imageData;
    NSString *_mimeType;
}

@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSString *mimeType;

- (void)bindToXPCDictionary:(id)arg1;
- (id)copyImageData;
- (void)dealloc;
- (BOOL)hasArtworkData;
- (id)imageData;
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mimeType;
- (unsigned int)type;

@end
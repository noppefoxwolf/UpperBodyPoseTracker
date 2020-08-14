#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>

@class Landmark;
@class UpperBodyPoseTracker;

@protocol UpperBodyPoseTrackerDelegate <NSObject>
- (void)upperBodyPoseTracker: (UpperBodyPoseTracker *)tracker didOutputLandmarks: (NSArray<Landmark *> *)landmarks;
- (void)upperBodyPoseTracker: (UpperBodyPoseTracker *)tracker didOutputPixelBuffer: (CVPixelBufferRef)pixelBuffer;
@end

@interface UpperBodyPoseTracker : NSObject
- (instancetype)init;
- (void)startGraph;
- (void)sendPixelBuffer:(CVPixelBufferRef)pixelBuffer;
@property (weak, nonatomic) id <UpperBodyPoseTrackerDelegate> delegate;
@end

@interface Landmark: NSObject
@property(nonatomic, readonly) float x;
@property(nonatomic, readonly) float y;
@property(nonatomic, readonly) float z;
@end

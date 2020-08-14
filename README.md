# UpperBodyPoseTracker

![](https://github.com/noppefoxwolf/UpperBodyPoseTracker/blob/master/.github/sample.gif)

## Carthage

```
binary "https://raw.githubusercontent.com/noppefoxwolf/UpperBodyPoseTracker/master/UpperBodyPoseTracker.json"
```

## Usage


import UpperBodyPoseTracker in bridgingHeader

```objc
#import <UpperBodyPoseTracker/UpperBodyPoseTracker.h>
```

setup pose tracker

```swift
let tracker: UpperBodyPoseTracker = UpperBodyPoseTracker()!

tracker.startGraph()
tracker.delegate = self
```

handle landmark and rendered example pixelBuffer

```
func handTracker(_ handTracker: HandTracker!, didOutputLandmarks landmarks: [Landmark]!) {
    print(landmarks.count)
}
    
func handTracker(_ handTracker: HandTracker!, didOutputPixelBuffer pixelBuffer: CVPixelBuffer!) {
    
}
```

## TODO

- [x] bitcode
- [ ] x86_64 / i386 

## Links

[google/mediapipe](https://github.com/google/mediapipe)

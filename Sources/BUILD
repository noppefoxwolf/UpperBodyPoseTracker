load("@build_bazel_rules_apple//apple:ios.bzl", "ios_framework")

ios_framework(
    name = "UpperBodyPoseTracker",
    hdrs = [
        "UpperBodyPoseTracker.h",
    ],
    infoplists = ["Info.plist"],
    bundle_id = "dev.noppe.UpperBodyPoseTracker",
    families = ["iphone", "ipad"],
    minimum_os_version = "10.0",
    deps = [
        ":UpperBodyPoseTrackerLibrary",
        "@ios_opencv//:OpencvFramework",
    ],
)

objc_library(
    name = "UpperBodyPoseTrackerLibrary",
    srcs = [
        "UpperBodyPoseTracker.mm",
    ],
    hdrs = [
        "UpperBodyPoseTracker.h",
    ],
    data = [
        "//mediapipe/graphs/pose_tracking:upper_body_pose_tracking_gpu.binarypb",
        "//mediapipe/modules/pose_detection:pose_detection.tflite",
        "//mediapipe/modules/pose_landmark:pose_landmark_upper_body.tflite",
    ],
    deps = [
        "//mediapipe/examples/ios/common:CommonMediaPipeAppLibrary",
    ] + select({
        "//mediapipe:ios_i386": [],
        "//mediapipe:ios_x86_64": [],
        "//conditions:default": [
            "//mediapipe/graphs/pose_tracking:upper_body_pose_tracking_gpu_deps",
            "//mediapipe/framework/formats:landmark_cc_proto",
        ],
    }),
)

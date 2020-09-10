// swift-tools-version:5.2
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MyLibrary",
    products: [
        // Products define the executables and libraries produced by a package, and make them visible to other packages.
        .library(
            name: "MyLibrary",
            targets: ["MyLibrary"]),
        .library(
            name: "ModuleX_Objc",
            targets: ["ModuleX_Objc"]),
        .library(
            name: "SwiftClasses",
            targets: ["SwiftClasses"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        .target(
            name: "ModuleX_Objc",
            dependencies: [], path: "Sources/ModuleX_Objc",
            exclude: ["SwiftSources"],cSettings: [
                .headerSearchPath("include")
        ]),
        .target(
            name: "SwiftClasses",
            dependencies: [], path: "Sources/SwiftClasses"),
        .target(
            name: "MyLibrary",
            dependencies: ["ModuleX_Objc","SwiftClasses"], path: "Sources/MyLibrary"
        ),
        .testTarget(
            name: "MyLibraryTests",
            dependencies: ["MyLibrary"]),
        
    ]
)

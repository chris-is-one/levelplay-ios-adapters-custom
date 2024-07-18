//
//  ISPangleAdapter.h
//  ISPangleAdapter
//
//  Copyright © 2023 ironSource Mobile Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IronSource/ISBaseAdapter+Internal.h>

static NSString * const PangleAdapterVersion = @"4.3.28";
static NSString * Githash = @"d57d072";

// System Frameworks For Pangle Adapter
@import Accelerate;
@import AdSupport;
@import AppTrackingTransparency;
@import AudioToolbox;
@import AVFoundation;
@import CoreGraphics;
@import CoreImage;
@import CoreLocation;
@import CoreMedia;
@import CoreML;
@import CoreMotion;
@import CoreTelephony;
@import CoreText;
@import ImageIO;
@import JavaScriptCore;
@import MapKit;
@import MediaPlayer;
@import MobileCoreServices;
@import QuartzCore;
@import Security;
@import StoreKit;
@import SystemConfiguration;
@import UIKit;
@import WebKit;


@interface ISPangleAdapter : ISBaseAdapter

@end

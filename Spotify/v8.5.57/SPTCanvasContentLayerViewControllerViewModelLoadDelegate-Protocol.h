//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTCanvasContentLayerViewControllerViewModel;

@protocol SPTCanvasContentLayerViewControllerViewModelLoadDelegate <NSObject>
- (void)didFailToLoadViewModel:(SPTCanvasContentLayerViewControllerViewModel *)arg1 withError:(NSError *)arg2;
- (void)didLoadViewModel:(SPTCanvasContentLayerViewControllerViewModel *)arg1;
- (void)willLoadViewModel:(SPTCanvasContentLayerViewControllerViewModel *)arg1;

@optional
- (void)didFailToRenderViewModel:(SPTCanvasContentLayerViewControllerViewModel *)arg1;
@end

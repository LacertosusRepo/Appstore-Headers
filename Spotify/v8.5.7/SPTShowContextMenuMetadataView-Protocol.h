//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTContextMenuHeader-Protocol.h"
#import "SPTThemableView-Protocol.h"

@class NSString, UIImage, UIView;
@protocol SPTShowContextMenuMetadataViewDelegate;

@protocol SPTShowContextMenuMetadataView <SPTContextMenuHeader, SPTThemableView>
@property(retain, nonatomic) UIView *subtitleAccessoryView;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *longDescription;
@property(retain, nonatomic) NSString *imageMetadataTitle;
@property(retain, nonatomic) NSString *metadataTitle;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(nonatomic) __weak id <SPTShowContextMenuMetadataViewDelegate> delegate;
@end


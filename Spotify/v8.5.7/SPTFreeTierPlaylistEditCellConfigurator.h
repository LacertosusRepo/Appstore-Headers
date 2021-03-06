//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTFreeTierPlaylistEditCellStyle;
@protocol SPTFreeTierPlaylistEditCellConfiguratorDelegate;

@interface SPTFreeTierPlaylistEditCellConfigurator : NSObject
{
    id <SPTFreeTierPlaylistEditCellConfiguratorDelegate> _delegate;
    SPTFreeTierPlaylistEditCellStyle *_editCellStyle;
}

@property(readonly, nonatomic) SPTFreeTierPlaylistEditCellStyle *editCellStyle; // @synthesize editCellStyle=_editCellStyle;
@property(nonatomic) __weak id <SPTFreeTierPlaylistEditCellConfiguratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)deletePressed:(id)arg1;
- (void)configureCell:(id)arg1 withTrackViewModel:(id)arg2;
- (id)initWithEditCellStyle:(id)arg1;

@end


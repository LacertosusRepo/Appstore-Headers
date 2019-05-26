//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTHomeMixTrackViewModel;
@protocol SPTHomeMixTrackCellDelegate;

@interface SPTHomeMixTrackCellInteractionListener : NSObject
{
    id <SPTHomeMixTrackCellDelegate> _cellDelegate;
    SPTHomeMixTrackViewModel *_trackViewModel;
}

@property(nonatomic) __weak SPTHomeMixTrackViewModel *trackViewModel; // @synthesize trackViewModel=_trackViewModel;
@property(nonatomic) __weak id <SPTHomeMixTrackCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)facePileTapped:(id)arg1;
- (void)contextMenuTapped:(id)arg1;
- (id)initWithCellDelegate:(id)arg1 trackViewModel:(id)arg2;

@end

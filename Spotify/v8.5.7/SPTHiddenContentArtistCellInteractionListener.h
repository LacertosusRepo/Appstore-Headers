//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTHiddenContentArtistCellDelegate, SPTHiddenContentArtistViewModel;

@interface SPTHiddenContentArtistCellInteractionListener : NSObject
{
    id <SPTHiddenContentArtistCellDelegate> _cellDelegate;
    id <SPTHiddenContentArtistViewModel> _artistViewModel;
}

@property(nonatomic) __weak id <SPTHiddenContentArtistViewModel> artistViewModel; // @synthesize artistViewModel=_artistViewModel;
@property(nonatomic) __weak id <SPTHiddenContentArtistCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)contextMenuTapped:(id)arg1;
- (id)initWithCellDelegate:(id)arg1 artistViewModel:(id)arg2;

@end


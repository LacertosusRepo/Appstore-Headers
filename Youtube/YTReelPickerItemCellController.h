//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

#import "YTReelPickerCellDelegate.h"

@class NSString;

@interface YTReelPickerItemCellController : YTInnerTubeCellController <YTReelPickerCellDelegate>
{
    id <YTReelThumbnailResponderProvider> _selectedImageProvider;
}

@property(nonatomic) __weak id <YTReelThumbnailResponderProvider> selectedImageProvider; // @synthesize selectedImageProvider=_selectedImageProvider;
- (void).cxx_destruct;
- (void)didTapThumbnail;
- (id)selectedThumbnail;
- (void)didSelectItem;
- (_Bool)shouldSelectItem;
- (void)setCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

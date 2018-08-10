//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCollectionViewCellProtocol.h"
#import "YTResponder.h"
#import "YTThumbnailMapping.h"

@class NSMutableArray, NSString, YTICreatorStudioOfferRenderer;

@interface YTCreatorStudioOfferCell : YTCollectionViewCell <YTCollectionViewCellProtocol, YTResponder, YTThumbnailMapping>
{
    NSMutableArray *_sections;
    NSMutableArray *_separators;
    id <YTResponder> _parentResponder;
    YTICreatorStudioOfferRenderer *_entry;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) YTICreatorStudioOfferRenderer *entry; // @synthesize entry=_entry;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)thumbnailMappings;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


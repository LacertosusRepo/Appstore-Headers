//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSUUID;
@protocol HUBComponent;

@interface HUBComponentCollectionViewCell : UICollectionViewCell
{
    NSUUID *_identifier;
    id <HUBComponent> _component;
}

@property(retain, nonatomic) id <HUBComponent> component; // @synthesize component=_component;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end


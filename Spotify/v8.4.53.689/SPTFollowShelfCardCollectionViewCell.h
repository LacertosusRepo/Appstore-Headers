//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GLUECardCollectionViewCell.h"

@class SPTFollowShelfCardView;

@interface SPTFollowShelfCardCollectionViewCell : GLUECardCollectionViewCell
{
    SPTFollowShelfCardView *_followCardView;
}

@property(retain, nonatomic) SPTFollowShelfCardView *followCardView; // @synthesize followCardView=_followCardView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)loadCardView;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBComponent.h"

@class NSSet, UIView;

@interface SPTCeramicRowHubComponent : NSObject <HUBComponent>
{
    UIView *_view;
    long long _renderType;
}

@property(readonly, nonatomic) long long renderType; // @synthesize renderType=_renderType;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (double)preferredViewHeight;
- (void)configureViewWithModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)prepareViewForReuse;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)loadView;
@property(readonly, nonatomic) NSSet *layoutTraits;
- (id)initWithRenderType:(long long)arg1;

@end


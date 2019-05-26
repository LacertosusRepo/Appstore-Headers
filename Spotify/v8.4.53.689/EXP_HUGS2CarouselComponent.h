//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUGSThemableComponent.h"

#import "EXP_HUBComponent.h"
#import "EXP_HUBComponentWithChildren.h"

@class NSSet;

@interface EXP_HUGS2CarouselComponent : EXP_HUGSThemableComponent <EXP_HUBComponent, EXP_HUBComponentWithChildren>
{
    id <EXP_HUBComponentChildDelegate> _childDelegate;
    Class _collectionViewClass;
}

@property(readonly, nonatomic) Class collectionViewClass; // @synthesize collectionViewClass=_collectionViewClass;
@property(nonatomic) __weak id <EXP_HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (void).cxx_destruct;
- (struct CGSize)calculateFirstChildSizeForModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1 collectionViewClass:(Class)arg2;
- (id)initWithTheme:(id)arg1;

@end

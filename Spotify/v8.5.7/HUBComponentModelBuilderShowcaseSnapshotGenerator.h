//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBComponentModelBuilderImplementation.h"

#import "HUBComponentShowcaseSnapshotGenerator-Protocol.h"

@class HUBComponentRegistryImplementation;

@interface HUBComponentModelBuilderShowcaseSnapshotGenerator : HUBComponentModelBuilderImplementation <HUBComponentShowcaseSnapshotGenerator>
{
    HUBComponentRegistryImplementation *_componentRegistry;
}

@property(readonly, nonatomic) HUBComponentRegistryImplementation *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
- (void).cxx_destruct;
- (id)generateShowcaseSnapshotForContainerViewSize:(struct CGSize)arg1;
- (id)initWithJSONSchema:(id)arg1 componentRegistry:(id)arg2 componentDefaults:(id)arg3 iconImageResolver:(id)arg4 mainImageDataBuilder:(id)arg5 backgroundImageDataBuilder:(id)arg6;

@end

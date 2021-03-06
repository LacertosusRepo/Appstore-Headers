//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTShelfService.h"

@class NSString, SPTAllocationContext, SPTShelfRegistryImplementation;

@interface SPTShelfServiceImplementation : NSObject <SPTShelfService>
{
    SPTShelfRegistryImplementation *_shelfRegistry;
    id <SPTShelves> _shelves;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(retain, nonatomic) SPTShelfRegistryImplementation *shelfRegistry; // @synthesize shelfRegistry=_shelfRegistry;
- (void).cxx_destruct;
- (id)provideShelves;
- (id)provideShelfRegistry;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


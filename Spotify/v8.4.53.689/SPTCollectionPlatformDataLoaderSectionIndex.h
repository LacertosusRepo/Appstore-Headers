//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionPlatformSectionIndexFields.h"

@class NSString;

@interface SPTCollectionPlatformDataLoaderSectionIndex : NSObject <SPTCollectionPlatformSectionIndexFields>
{
    NSString *_title;
    unsigned long long _location;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


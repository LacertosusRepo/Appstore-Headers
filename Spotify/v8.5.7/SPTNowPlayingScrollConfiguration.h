//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SPTNowPlayingScrollConfiguration : NSObject
{
    long long _identifier;
    NSArray *_cardsIdentifiers;
}

+ (id)pivotsConfiguration;
+ (id)BTLStorylinesConfiguration;
+ (id)storylinesBTLConfiguration;
+ (id)defaultConfiguration;
@property(copy, nonatomic) NSArray *cardsIdentifiers; // @synthesize cardsIdentifiers=_cardsIdentifiers;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(long long)arg1 cardsIdentifiers:(id)arg2;

@end


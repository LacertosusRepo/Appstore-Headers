//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SPTStorylines : NSObject <NSCoding>
{
    NSString *_identifier;
    NSURL *_artistUri;
    NSString *_artistName;
    NSURL *_artistImageUri;
    NSURL *_entityUri;
    NSURL *_targetUri;
    NSArray *_cards;
}

@property(readonly, nonatomic) NSArray *cards; // @synthesize cards=_cards;
@property(readonly, nonatomic) NSURL *targetUri; // @synthesize targetUri=_targetUri;
@property(readonly, nonatomic) NSURL *entityUri; // @synthesize entityUri=_entityUri;
@property(readonly, nonatomic) NSURL *artistImageUri; // @synthesize artistImageUri=_artistImageUri;
@property(readonly, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, nonatomic) NSURL *artistUri; // @synthesize artistUri=_artistUri;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithArtistUri:(id)arg1 artistName:(id)arg2 artistImageUri:(id)arg3 entityUri:(id)arg4 targetUri:(id)arg5 cards:(id)arg6;
- (id)initWithDictionary:(id)arg1;

@end

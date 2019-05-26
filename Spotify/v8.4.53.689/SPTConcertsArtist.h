//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

@interface SPTConcertsArtist : NSObject <NSCopying>
{
    _Bool _hasAffinity;
    NSURL *_URI;
    NSString *_name;
    NSURL *_imageURL;
    unsigned long long _monthlyListeners;
}

@property(readonly, nonatomic) unsigned long long monthlyListeners; // @synthesize monthlyListeners=_monthlyListeners;
@property(readonly, nonatomic) _Bool hasAffinity; // @synthesize hasAffinity=_hasAffinity;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURI:(id)arg1 name:(id)arg2 imageURL:(id)arg3 hasAffinity:(_Bool)arg4 monthlyListeners:(unsigned long long)arg5;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTFriendsHomeContentModal : NSObject
{
    NSString *_identifier;
    NSURL *_backgroundImageURL;
    NSURL *_imageURL;
    NSString *_modalDescription;
    NSURL *_targetURI;
}

@property(readonly, copy, nonatomic) NSURL *targetURI; // @synthesize targetURI=_targetURI;
@property(readonly, copy, nonatomic) NSString *modalDescription; // @synthesize modalDescription=_modalDescription;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSURL *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface SPTRadioModel : NSObject
{
    NSURL *_URI;
}

+ (id)stringsFromURLs:(id)arg1;
+ (id)URLsFromStrings:(id)arg1;
+ (id)objectsRepresentationFromList:(id)arg1;
+ (id)objectsWithDictionaryList:(id)arg1;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)description;
- (_Bool)restoreWithObjectRepresentation:(id)arg1;
- (id)objectRepresentation;
- (id)initWithObjectRepresentation:(id)arg1;
- (id)initWithURI:(id)arg1;

@end


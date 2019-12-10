//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKPB_PBEnumDescriptor, NSString;

@interface GCKPB_PBExtensionDescriptor : NSObject
{
    struct GCKPB_PBExtensionDescription *description_;
}

@property(readonly, retain, nonatomic) GCKPB_PBEnumDescriptor *enumDescriptor;
@property(readonly, nonatomic) Class msgClass;
@property(readonly, nonatomic, getter=isMessage) _Bool message;
@property(readonly, nonatomic, getter=isPackable) _Bool packable;
@property(readonly, nonatomic, getter=isRepeated) _Bool repeated;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) unsigned int fieldNumber;
- (const char *)singletonNameC;
@property(readonly, nonatomic) NSString *singletonName;
- (id)initWithExtensionDescription:(struct GCKPB_PBExtensionDescription *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBCommandHandler.h"

@class SPTRadioLogger;

@interface SPTRadioCreateSearchNavigationLoggingCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    SPTRadioLogger *_logger;
}

@property(retain, nonatomic) SPTRadioLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (_Bool)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithRadioLogger:(id)arg1;

@end


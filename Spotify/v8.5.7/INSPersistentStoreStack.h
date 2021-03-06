//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSPersistentStoreStackProtocol-Protocol.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentContainer, NSString;

@interface INSPersistentStoreStack : NSObject <INSPersistentStoreStackProtocol>
{
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_mainQueueMOC;
    NSManagedObjectContext *_privateMOC;
    NSPersistentContainer *_persistentContainer;
}

@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(retain, nonatomic) NSManagedObjectContext *privateMOC; // @synthesize privateMOC=_privateMOC;
@property(retain, nonatomic) NSManagedObjectContext *mainQueueMOC; // @synthesize mainQueueMOC=_mainQueueMOC;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
- (void).cxx_destruct;
- (id)coreDataModel;
- (id)storeName;
- (id)storeUrl;
- (id)documentsDirectory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


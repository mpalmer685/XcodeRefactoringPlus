//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface JKJavaClass : NSObject
{
    NSString *_className;
    NSString *_superclassName;
    unsigned long long _accessFlags;
    NSMutableArray *_interfaces;
    NSMutableArray *_fields;
    NSMutableArray *_methods;
    NSMutableArray *_constructors;
    NSArray *_attributes;
    JKClassLibrary *_classLibrary;
}

- (id)description;
- (void)_appendMethodDescriptions:(id)arg1 areDeclarations:(BOOL)arg2 areConstructors:(BOOL)arg3 toString:(id)arg4;
- (void)_appendFieldDescriptionsToString:(id)arg1;
- (id)attributeWithName:(id)arg1;
- (BOOL)hasMember:(id)arg1;
- (id)sourceFile;
- (id)classLibrary;
- (id)package;
- (id)outerClass;
- (id)superclass;
- (id)attributes;
- (id)interfaces;
- (id)fields;
- (id)constructors;
- (id)methods;
- (BOOL)isDeprecated;
- (BOOL)isInnerClass;
- (BOOL)isInterface;
- (BOOL)isFinal;
- (BOOL)isAbstract;
- (BOOL)isPublic;
- (id)packageName;
- (id)outerClassName;
- (id)superclassName;
- (id)className;
- (void)_setClassLibrary:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)setClassAttributes:(id)arg1;
- (void)addMethodName:(id)arg1 signature:(id)arg2 access:(int)arg3 attributes:(id)arg4;
- (void)addConstructorName:(id)arg1 signature:(id)arg2 access:(int)arg3 attributes:(id)arg4;
- (void)addFieldName:(id)arg1 signature:(id)arg2 access:(int)arg3 attributes:(id)arg4;
- (void)setFieldCount:(long long)arg1;
- (void)addInterfaceName:(id)arg1;
- (void)setSuperClassName:(id)arg1;
- (void)setClassName:(id)arg1;
- (void)setClassAccess:(int)arg1;

@end
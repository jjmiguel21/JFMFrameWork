//
//  JFMEntityManager.h
//  JFMFramework
//
//  Created by JaimeMiguel on 2/14/20.
//  Copyright © 2020 M4Guel. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFMEntityManager : NSObject

-(instancetype)initWithDict:(NSDictionary *)dict withSortKeys:(NSArray *)sortKeys;
-(instancetype)initWithArray:(NSArray *)array withSortKeys:(NSArray *)sortKeys;

@end

NS_ASSUME_NONNULL_END

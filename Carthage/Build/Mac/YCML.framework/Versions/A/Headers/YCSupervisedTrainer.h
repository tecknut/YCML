//
//  YCSupervisedTrainer.h
//  YCML
//
//  Created by Ioannis (Yannis) Chatzikonstantinou on 2/3/15.
//  Copyright (c) 2015 Ioannis (Yannis) Chatzikonstantinou. All rights reserved.
//
// This file is part of YCML.
//
// YCML is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// YCML is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with YCML.  If not, see <http://www.gnu.org/licenses/>.

@import Foundation;
#import "YCGenericTrainer.h"
@class YCSupervisedModel, YCDataframe, Matrix;

@interface YCSupervisedTrainer : YCGenericTrainer

/**
 Trains a model using the receiver's training algorithm, and two dataframes as input and output.
 
 @param model  The model to train. Can be nil.
 @param input  The training input.
 @param output The training output.
 
 @return The trained model (if input != nil, it is the same as the input)
 */
- (YCSupervisedModel *)train:(YCSupervisedModel *)model
                       input:(YCDataframe *)input
                      output:(YCDataframe *)output;

/**
 Trains a model using the receiver's training algorithm, and two matrices as input and output.
 
 @param model  The model to train. Can be nil.
 @param input  The training input.
 @param output The training output.
 
 @return The trained model (if input != nil, it is the same as the input)
 */
- (YCSupervisedModel *)train:(YCSupervisedModel *)model
                 inputMatrix:(Matrix *)input
                outputMatrix:(Matrix *)output;

/**
 Implements the actual training routine. This method should be implemented
 when subclassing.
 
 @param model  The model to train.
 @param input  The training input.
 @param output The training output.
 */
- (void)performTrainingModel:(YCSupervisedModel *)model
                 inputMatrix:(Matrix *)input
                outputMatrix:(Matrix *)output;



@end
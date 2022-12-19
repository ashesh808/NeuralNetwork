/*
 * Description: The implementation file for Net.h
 * Author: Ashesh Nepal
 */

#include "Net.h" // Header file

Net::Net()
{
}

Net::Net(const vector<unsigned> &topology)
{
    unsigned numLayers = topology.size();
    for (unsigned layerNum = 0; layerNum < numLayers; ++layerNum)
    {
        m_layers.push_back(Layer());
        unsigned numOutputs = 0;
        // Filling the new layer with ith Neurons and adding a bias Neuron to the layer
        for (unsigned neuronNum = 0; neuronNum <= topology[layerNum]; ++neuronNum)
        {
            m_layers.back().push_back(Neuron(numOutputs));
            cout << "Added a new neuron! \n";
        }
    }
}

void Net::feedForward(const vector<double> &inputVals)
{
}

void Net::backProp(const vector<double> &targetVals)
{
}

void Net::getResults(vector<double> &resultVals) const
{
}
